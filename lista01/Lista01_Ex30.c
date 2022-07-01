/*Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um algoritmo que receba
o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do
funcionário*/
#include <stdio.h>

int main(){
    float a,b;
    printf("Digite, respectivamente, o salario fixo e o valor das vendas do funcionario\n");
    scanf("%f %f", &a, &b);
    printf("Sua comissao foi %.2f e seu salario final %.2f\n",b*0.04, a+(b*0.04));
return 0;
}
