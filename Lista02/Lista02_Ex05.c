/*Fa�a um algoritmo que leia uma vari�vel e some 5 caso seja par ou some 8 caso seja �mpar, imprimir o resultado desta opera��o. */

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
