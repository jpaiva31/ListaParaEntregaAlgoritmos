/*Criar dois vetores A e B cada um com 10 elementos inteiros. Construir um vetor C, onde cada elemento de C
é a soma dos respectivos elementos em A e B, ou seja:
C[i] = A[i] + B[i]. */
#include <stdio.h>

int main(){
    int a[10], b[10],c[10];
    printf("Digite os 10 numeros do primeiro vetor\n");
    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    printf("Digite os 10 numeros do segundo vetor\n");
    for(int i=0;i<10;i++){
        scanf("%d", &b[i]);
    }
    printf("A soma entre os elementos de mesmo indice:\n");
    for(int i=0;i<10;i++){
    c[i]=a[i]+b[i];
    printf("%d\n", c[i]);
    }

    return 0;
}
