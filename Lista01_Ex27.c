/*Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
peso 2 para a primeira nota e peso 3 para a segunda nota.*/
#include <stdio.h>

int main(){
    float a, b,c;
    printf("Digite as duas notas\n");
    scanf("%f %f", &a, &b);
    printf("A media eh %.2f",(3*a+2*b)/5);
return 0;
}
