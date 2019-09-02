#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
    int matricula, dia, mes, ano;
};

struct pessoa p[];
struct pessoa p_maio[];
int maio = 0;
int pessoa = 0;

void armazenar()
{
    int i, verify;

    for(i = 0; i<2; i++){
        printf("Informe o numero de matricula.\n");
        scanf("%d", &verify);
        if(verify == 0){
            break;
        }
        p[i].matricula = verify;
        printf("Informe a data de nascimento.\n");
        printf("Utilize o formato DD/MM/AAAA.\n");
        scanf("%d/%d/%d", &p[i].dia, &p[i].mes, &p[i].ano);
        pessoa++;
        printf("\n");
        if(p[i].dia > 0 && p[i].dia < 16 && p[i].mes == 5){
            p_maio[maio].matricula = p[i].matricula;
            p_maio[maio].dia = p[i].dia;
            p_maio[maio].mes = p[i].mes;
            p_maio[maio].ano = p[i].ano;
            maio++;
        }
        if(i == 1){
            printf("...AGENDA CHEIA...");
            system("pause");
        }
    }
}
void exibir()
{
    int i;
    for(i = 0; i<pessoa; i++){
        printf("/////////////////////////////////////////\n");
        printf("//Matricula: %d\n", p[i].matricula);
        printf("//Data de nascimento: %d/%d/%d\n", p[i].dia, p[i].mes, p[i].ano);
        printf("/////////////////////////////////////////\n\n");
    }

}
void exib_maio()
{
    int i;

    printf("\n\n~~~Aniversariantes da primeira quinzena de maio~~~\n\n\n");
    for(i = 0; i<maio; i++){
        printf("///////////////////////////////////////////////\n");
        printf("//Matricula: %d\n", p_maio[i].matricula);
        printf("//Data de nascimento: %d/%d/%d\n", p_maio[i].dia, p_maio[i].mes, p_maio[i].ano);
        printf("///////////////////////////////////////////////\n\n");
    }
}

int main()
{
    armazenar();
    exibir();
    if(maio > 0){
        exib_maio();
    }

    return 0;
}
