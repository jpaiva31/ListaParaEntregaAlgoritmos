/*Escreva um programa que leia dois vetores de 10 posi��es e fa�a a soma dos elementos de mesmo �ndice,
colocando o resultado em um terceiro vetor. Mostre o vetor resultante*/
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

