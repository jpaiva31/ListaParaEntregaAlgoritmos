/*Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a. o novo peso se a pessoa engordar 15% sobre o peso digitado;
b. o novo peso se a pessoa emagrecer 20% sobre o peso digitado.*/
#include <stdio.h>

int main(){
    float a;
    printf("Digite o peso da pessoa\n");
    scanf("%f", &a);
    printf("Se essa pessoa engordar 15%, ele tera %.2f kilos, e caso emagreca 20%, tera %.2f kilos\n",a+a*0.15, a-a*0.2);
return 0;
}
