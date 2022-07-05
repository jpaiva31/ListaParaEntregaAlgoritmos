/*Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela abaixo.
Faça um algoritmo que leia o salário e o cargo de um funcionário e calcule o novo salário.
Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber 40% de aumento. Mostre o
salário antigo, o novo salário e a diferença.
Codigo   Cargo     Percentual
101      Gerente    10%
102      Engenheiro 20%
103      Técnico    30%
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
