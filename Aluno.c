#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    int matricula, idade;
    float media[5];


};

struct aluno a[3];
int i, j;

void montar_aluno()
{
    for(i = 0; i<1; i++){
        printf("Informe o numero de matricula.\n");
        scanf("%d", &a[i].matricula);
        printf("\nInforme a idade do aluno.\n");
        scanf("%d", &a[i].idade);
        printf("\n");
        for(j = 0; j<5; j++){
            printf("Informe a media da disciplina %d.\n", j+1);
            scanf("%f", &a[i].media[j]);
        }
        printf("\n");
    }

}

void exibir()
{
    for(i = 0; i<1; i++){
        printf("////////////////////////////////////\n");
        printf("//Numero de matricula: %d\n", a[i].matricula);
        printf("//Media global: %.2f\n", (a[i].media[0] + a[i].media[1] + a[i].media[2] + a[i].media[3] + a[i].media[4])/5);
        printf("////////////////////////////////////\n\n");
    }

}

int main()
{
    montar_aluno();
    exibir();

    return 0;
}
