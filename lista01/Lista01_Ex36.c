/*Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule e
mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio. */
#include <stdio.h>

int main(){
    float a, b;
    printf("Digite, respectivamente, quanto eh o salario minimo e qual o salario do funcionario\n");
    scanf("%f %f", &a,&b);
    printf("Ele recebe %.2f salarios minimos\n",b/a);
return 0;
}
