/*Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e
mostre a quantidade de salários mínimos que ganha esse funcionário. */
#include <stdio.h>

int main(){
    float a, b;
    printf("Digite, respectivamente, quanto eh o salario minimo e qual o salario do funcionario\n");
    scanf("%f %f", &a,&b);
    printf("Ele recebe %.2f salarios minimos\n",b/a);
return 0;
}
