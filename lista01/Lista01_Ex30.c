/*Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um algoritmo que receba
o sal�rio fixo de um funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e o sal�rio final do
funcion�rio*/
#include <stdio.h>

int main(){
    float a,b;
    printf("Digite, respectivamente, o salario fixo e o valor das vendas do funcionario\n");
    scanf("%f %f", &a, &b);
    printf("Sua comissao foi %.2f e seu salario final %.2f\n",b*0.04, a+(b*0.04));
return 0;
}
