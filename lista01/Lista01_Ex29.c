/*Fa�a um algoritmo que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se que este
sofreu um desconto de 10%.*/
#include <stdio.h>

int main(){
    float a;
    printf("Digite o preco do produto\n");
    scanf("%f", &a);
    printf("O novo preco do produto eh %.2f",a+a*0.1);
return 0;
}
