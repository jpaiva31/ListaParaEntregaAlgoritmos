/*. A lanchonete Gostosura vende apenas um tipo de sandu�che, cujo recheio inclui duas fatias de queijo, uma
fatia de presunto e uma rodela de hamb�rguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e
que a rodela de hamb�rguer pesa 100 gramas, fa�a um algoritmo em que o dono forne�a a quantidade de sandu�ches a fazer, e
a m�quina informe as quantidades (em quilos) de queijo, presunto e carne necess�rios para compra. */
#include <stdio.h>

int main(){
    int a;
    printf("Digite a quantidade de sanduiches que quer fazer\n");
    scanf("%d", &a);
    printf("Voce tera que comprar %d gramas de queijo, %d gramas de presunto, %d gramas de carne\n",a*100,a*50, a*100);
return 0;
}
