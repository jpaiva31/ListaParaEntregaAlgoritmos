/*Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas. */
#include <stdio.h>

int main(){
    float a;
    printf("Digite o peso da pessoa\n");
    scanf("%f", &a);
    printf("Ela pesa %.2f gramas\n",a*1000);
return 0;
}
