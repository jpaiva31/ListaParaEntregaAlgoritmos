/*Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado.*/

#include <stdio.h>

int main()
{
    int a;
    printf("Digite um numeros:\n");
    scanf("%d", &a);
    if(a<0)printf("%d\n", a*3);
    else printf("%d\n", a*2);

    return 0;
}
