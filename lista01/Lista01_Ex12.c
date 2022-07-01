/*Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento, desconte 8%
de impostos. Imprima o salário inicial, o salário com o aumento e o salário final. */
#include <stdio.h>

int main(){
    float a, aumento, fim;
    printf("Digite o salario do funcionario\n");
    scanf("%f", &a);
    aumento+=a+a*0.15;
    fim=aumento;
    fim-=aumento*0.08;
    printf("Salario inicial: %f\nSalario com o aumento: %f\nSalario final: %f\n", a, aumento, fim);
return 0;
}
