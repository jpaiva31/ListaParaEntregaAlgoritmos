/*Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar, imprimir o resultado desta operação. */

#include <stdio.h>

int main()
{
    int a;
    printf("Digite um numero:\n");
    scanf("%d", &a);
    if(a%2==0)printf("%d\n", a+5);
    else printf("%d\n", a+8);

    return 0;
}
