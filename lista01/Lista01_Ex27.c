/*Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.
Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações.*/
#include <stdio.h>

int main(){
    float a, b;
    printf("Digite 2 numeros\n");
    scanf("%f %f", &a, &b);
    printf("A divisao entre os 2 numeros eh %.2f",a/b);
return 0;
}
