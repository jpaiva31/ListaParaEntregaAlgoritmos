/*. A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo, uma
fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e
que a rodela de hambúrguer pesa 100 gramas, faça um algoritmo em que o dono forneça a quantidade de sanduíches a fazer, e
a máquina informe as quantidades (em quilos) de queijo, presunto e carne necessários para compra. */
#include <stdio.h>

int main(){
    int a;
    printf("Digite a quantidade de sanduiches que quer fazer\n");
    scanf("%d", &a);
    printf("Voce tera que comprar %d gramas de queijo, %d gramas de presunto, %d gramas de carne\n",a*100,a*50, a*100);
return 0;
}
