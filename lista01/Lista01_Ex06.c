/*O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um algoritmo que leia o
peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balança já desconte
o peso do prato*/
#include <stdio.h>

int main(){
    float a;
    printf("Digite o peso do prato\n");
    scanf("%f", &a);
    printf("O preco a ser pago eh %f",12.0*a);
 return 0;   
}