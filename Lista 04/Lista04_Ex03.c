/*Criar um vetor A com 8 elementos inteiros. Construir um vetor B de mesmo tipo e tamanho e com os elementos do vetor A
multiplicados por 2, ou seja: B[i] = A[i] * 2*/
#include <stdio.h>

int main()
{
    int A[8],B[8];
    printf("Digite os 8 elementos do vetor A\n");
    for(int i=0; i<8; i++)
    {
        scanf("%d",&A[i]);
        B[i]=A[i]*2;
    }
    printf("Vetor B:\n");
for(int i=0;i<8;i++)printf("%d\n",B[i]);
    return 0;
}
