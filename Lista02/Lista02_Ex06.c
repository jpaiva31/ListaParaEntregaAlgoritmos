/*Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar, imprimir o resultado desta operação. */

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Digite tres inteiros diferentes:\n");
    scanf("%d %d %d", &a,&b,&c);

    if(a>b&&a>c)
    {
        if(b>c)printf("%d %d %d", c,b,a);
        else printf("%d %d %d", b,c,a);
    }
    else if(b>a && b>c)
    {
        if(a>c)printf("%d %d %d", c,a,b);
        else printf("%d %d %d", a,c,b);
    }
    else
    {
        if(a>b)printf("%d %d %d", b,a,c);
        else printf("%d %d %d", a,b,c);
    }

    return 0;
}
