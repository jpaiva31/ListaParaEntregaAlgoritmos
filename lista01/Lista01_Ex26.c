/*Faça um algoritmo que receba três números, calcule e mostre a multiplicação desses números.*/
#include <stdio.h>

int main(){
    float a, b,c;
    printf("Digite 3 numeros\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("A multiplicacao entre os 3 numeros eh %.2f",a*b*c);
return 0;
}
