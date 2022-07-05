/*. Para uma lanchonete, escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor
a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. O cardápio
é o seguinte:
Produto             Preço       codigo
Cachorro quente     R$ 11,00    1
Bauru               R$ 8,50     2
Misto Quente        R$ 8,00     3
Hamburguer          R$ 9,00     4
Cheeseburguer       R$ 10,00    5
Refrigerante        R$ 4,50     6
*/

#include <stdio.h>

int main()
{
    int a;
    float b;
    printf("Digite, respectivamente, o codigo do lanche e a quantidade\n");
    scanf("%d %f", &a, &b);
    if(a==1)printf("O valor a ser pago sera %.2f", b*11.0);
    else if(a==2)printf("O valor a ser pago sera %.2f", b*8.5);
    else if(a==3)printf("O valor a ser pago sera %.2f", b*8);
    else if(a==4)printf("O valor a ser pago sera %.2f", b*9);
    else if(a==5)printf("O valor a ser pago sera %.2f", b*10);
    else if(a==6)printf("O valor a ser pago sera %.2f", b*4.5);

    return 0;
}
