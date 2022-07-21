/*Elabore um algoritmo que leia um vetor e em seguida apresente o vetor ordenado – use o método de ordenação que preferir*/
#include <stdio.h>

int main()
{
    int n,aux;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &n);
    int *vet=(int*)malloc(n*sizeof(int)); //prof ainda nao passou malloc

    for(int i=0; i<n; i++)scanf("%d", &vet[i]);

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(vet[i]>vet[j])
            {
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }

    for(int i=0; i<n; i++)printf("%d\n", vet[i]);

    return 0;
}
