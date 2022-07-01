/*Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa. */
#include <stdio.h>
#include <math.h>
int main(){
    float a, b;
    printf("Digite, respecivamente, os catetos do triangulo\n");
    scanf("%f %f", &a, &b);
    printf("A hipotenusa desse triangulo eh %.2f",pow(pow(a,2)+pow(b,2),0.5));

    return 0;
}
