/*Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do
litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque. */
#include <stdio.h>

int main(){
    int a,b;
    printf("Digite, respectivamente, o preco do litro da gasosa e o valor que foi pago\n");
    scanf("%d %d", &a, &b);
    printf("Voce conseguiu colocar %d litros",a*b);
 return 0;   
}