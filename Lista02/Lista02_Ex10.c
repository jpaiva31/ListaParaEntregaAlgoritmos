/*Elabore um algoritmo que leia dois n�meros inteiros e mostre o resultado da diferen�a do maior valor pelo
menor;*/

#include <stdio.h>

int main()
{
    int a,b;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &a,&b);
    if(a>=b)printf("a-b = %d", a-b);
    else printf("b - a = %d", b-a);

    return 0;
}
