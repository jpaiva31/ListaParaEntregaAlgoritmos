/*Fa�a um algoritmo que receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo segundo.
Sabe-se que o segundo n�mero n�o pode ser zero, portanto n�o � necess�rio se preocupar com valida��es.*/
#include <stdio.h>

int main(){
    float a, b;
    printf("Digite 2 numeros\n");
    scanf("%f %f", &a, &b);
    printf("A divisao entre os 2 numeros eh %.2f",a/b);
return 0;
}
