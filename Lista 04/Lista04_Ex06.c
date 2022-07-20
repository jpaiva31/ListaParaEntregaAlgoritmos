/*Ler um vetor A com 10 elementos inteiros correspondentes as idades de um grupo de pessoas. Escreva um
programa que determine e escreva a menor e a maior idades e suas respectivas posições. */
#include <stdio.h>


int main()
{
    int a[12],maior,menor;
    printf("Digite a idade das 10 pessoas\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
        if(i==0)
        {
            maior=a[i];
            a[11]=i;
            menor=a[i];
            a[12]=i;
        }
        if(a[i]>maior){
            maior=a[i];
            a[11]=i;
        }
        if(a[i]<menor){
            menor=a[i];
            a[12]=i;
    }
    }
    printf("Maior: %d indice: %d\nMenor: %d indice: %d", maior,a[11], menor,a[12]);
    return 0;
}
