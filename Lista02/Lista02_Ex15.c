/*Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo, conforme a tabela abaixo.
Fa�a um algoritmo que leia o sal�rio e o cargo de um funcion�rio e calcule o novo sal�rio.
Se o cargo do funcion�rio n�o estiver na tabela, ele dever�, ent�o, receber 40% de aumento. Mostre o
sal�rio antigo, o novo sal�rio e a diferen�a.
Codigo   Cargo     Percentual
101      Gerente    10%
102      Engenheiro 20%
103      T�cnico    30%
*/

#include <stdio.h>

int main()
{
    int a;
    float b;
    printf("Digite, respectivamente, o codigo do seu cargo e seu salario\n");
    scanf("%d %f", &a, &b);
    if(a==101)printf("Salario antigo: %.2f\nSalario novo: %.2f\nDiferenca de salarios: %.2f", b,b+b*0.1,b*0.1);
    else if(a==102)printf("Salario antigo: %.2f\nSalario novo: %.2f\nDiferenca de salarios: %.2f", b,b+b*0.2,b*0.2);
    else if(a==103)printf("Salario antigo: %.2f\nSalario novo: %.2f\nDiferenca de salarios: %.2f", b,b+b*0.3,b*0.3);
    else printf("Salario antigo: %.2f\nSalario novo: %.2f\nDiferenca de salarios: %.2f", b,b+b*0.4,b*0.4);

    return 0;
}
