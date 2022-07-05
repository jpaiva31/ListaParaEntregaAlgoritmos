/*Escreva um algoritmo que leia o número de identificação do aluno, 3 notas obtidas e calcule a média aritmética obtida pelo aluno.
Ao final informe se o aluno foi aprovado direto, ficou em recuperação ou foi reprovado
por nota. */

#include <stdio.h>

int main()
{
    float a,b,c,mediaA;
    int id;
    printf("Digite, respectivamente, o numero de identificacao do aluno e suas 3 notas:\n");
    scanf("%d %f %f %f", &id, &a,&b,&c);
    mediaA=(a+b+c)/3;

    if(mediaA>=7)
        printf("O aluno de id %d foi aprovado com media %.2f!!",id,mediaA);
    else if(mediaA>=4&&mediaA<7)
        printf("O aluno de id %d ficou de recuperacao com media %.2f!!",id,mediaA);
    else if(mediaA<4)
        printf("O aluno de id %d foi reprovado com media %.2f!!",id,mediaA);


    return 0;
}
