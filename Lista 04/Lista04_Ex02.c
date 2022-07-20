/*Crie um programa que leia um vetor de 20 posições e informe:
a) Quantos números pares existem no vetor
b) Quantos números ímpares existem no vetor
c) Quantos números maiores do que 50
d) Quantos números menores do que 7 */
#include <stdio.h>

int main()
{
    int a[20],b[4];
    for(int i=0; i<4; i++)b[i]=0;
    printf("Digite os 20 elementos do vetor\n");
    for(int i=0; i<20; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)b[0]++;
        else b[1]++;
        if(a[i]>50)b[2]++;
        else if(a[i]<7)b[3]++;
    }
    printf("Quantidade de numeros:\nPares: %d\nImpares: %d\nMaiores que 50: %d\nMenores que 7: %d\n", b[0],b[1],b[2],b[3]);
    return 0;
}
