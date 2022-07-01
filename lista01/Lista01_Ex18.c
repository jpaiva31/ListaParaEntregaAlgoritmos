/*A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra. Faça um algoritmo para calcular e imprimir o
salário bruto e o salário líquido de um determinado funcionário. Considere que o salário líquido é igual ao salário bruto descontando-se
 10% de impostos. */
#include <stdio.h>

int main(){
    float a, b, sb,sl;
    printf("Digite, respectivamente, a quantidade de horas normais e extras trabalhadas\n");
    scanf("%f %f", &a, &b);
    sb=10*a+15*b;
    sl=sb-sb*0.01;
    printf("Salario bruto: %.f\nSalario liquido: %.f",sb, sl);
return 0;
}
