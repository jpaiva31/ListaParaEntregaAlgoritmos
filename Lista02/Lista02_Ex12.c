/*Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se
forem verificar se é um triângulo equilátero, isósceles ou escalenos. Se eles não formarem um triângulo, escrever a mensagem.
Considere as seguintes propriedades:
a. O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
b. Equiláteros: tem os comprimentos dos três lados iguais;
c. Isósceles: tem os comprimentos de dois lados iguais;
d. Escaleno: tem os comprimentos dos três lados diferentes.
*/

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Digite respectivamente os valores de X,Y e Z:\n");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b+c||b>a+c||c>a+b)printf("Nao eh triangulo");
    else if(a==b&&a==c)printf("O triangulo eh equilatero");
    else if(a==b||a==c||b==c)printf("O triangulo eh isosceles");
    else if(a!=b&&a!=c&&b!=c) printf("O triangulo eh escaleno");

    return 0;
}
