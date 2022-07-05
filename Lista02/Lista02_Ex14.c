/*Num determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados de 1990 em diante, a taxa incide sobre o
valor de tabela do carro. Elabore um algoritmo que leia o ano e o valor de tabela do carro, calcule e informe o
imposto a ser pago.
*/

#include <stdio.h>

int main()
{
    int a;
    float b;
    printf("Digite, respectivamente, o ano e o valor de tabela do carro:\n");
    scanf("%d %f", &a, &b);
    if(a<1990)printf("o valor do imposto a ser pago eh de %.2f",b*0.01);
    else printf("o valor do imposto a ser pago eh de %.2f",b*0.015);

    return 0;
}
