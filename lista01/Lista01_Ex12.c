/*Fa�a um algoritmo para ler o sal�rio de um funcion�rio e aument�-Io em 15%. Ap�s o aumento, desconte 8%
de impostos. Imprima o sal�rio inicial, o sal�rio com o aumento e o sal�rio final. */
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
