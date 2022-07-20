/*Criar um vetor A com 10 elementos inteiros. Escrever um programa que calcule e escreva:
a) a soma de elementos armazenados neste vetor que são inferiores a 15;
b) a quantidade de elementos armazenados no vetor que são iguais a 15; e
c) a média dos elementos armazenados no vetor que são superiores a 15. */
#include <stdio.h>

int main()
{
    int a[20],b[4];
    for(int i=0; i<4; i++)b[i]=0;
    printf("Digite os 10 elementos do vetor\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==15)b[0]++;
        if(a[i]>15)
        {
            b[2]+=a[i];
            b[3]++;
        }
        else if(a[i]<15) b[1]+=a[i];

    }

    printf("Soma dos elementos inferiores a 15: %d\nQuantidade de elementos iguais a 15: %d\nA media de elementos superiores a 15: %d", b[1],b[0],b[2]/b[3]);
    return 0;
}
