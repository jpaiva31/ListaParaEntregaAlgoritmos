/*Dados tr�s valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um tri�ngulo e, se
forem verificar se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles n�o formarem um tri�ngulo, escrever a mensagem.
Considere as seguintes propriedades:
a. O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;
b. Equil�teros: tem os comprimentos dos tr�s lados iguais;
c. Is�sceles: tem os comprimentos de dois lados iguais;
d. Escaleno: tem os comprimentos dos tr�s lados diferentes.
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
