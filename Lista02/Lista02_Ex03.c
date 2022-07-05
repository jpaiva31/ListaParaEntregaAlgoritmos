/*Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois,
caso contrário multiplique A por B. Ao final, apresente o resultado*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &a, &b);
    if(a==b)printf("%d\n", a+b);
    else printf("%d\n", a*b);

    return 0;
}
