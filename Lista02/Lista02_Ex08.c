/*Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o pre�o normal de etiqueta e a escolha da condi��o de pagamento.
Utilize os c�digos da tabela a seguir para ler qual a condi��o
de pagamento escolhida e efetuar o c�lculo adequado.
C�digo Condi��o de pagamento
a) � vista em dinheiro ou cheque, recebe 10% de desconto
b) � vista no cart�o de cr�dito, recebe 15% de desconto
c) Em duas vezes, pre�o normal de etiqueta sem juros
d) Em duas vezes, pre�o normal de etiqueta mais juros de 10% */

#include <stdio.h>

int main()
{
    float a;
    char b;
    printf("Digite, respectivamente, o valor de etiqueta do produto e sua condicao de acordo com a tabela a seguir:\n");
    printf("Codigo Condicao de pagamento\na) A vista em dinheiro ou cheque\nb) A vista no cartao de credito\nc) Em duas vezes\nd) Em tres vezes\n%");
    scanf("%f %c", &a, &b);

    if(b=='a')
        printf("O preco a ser pago eh %.2f",a-a*0.1);
    else if(b=='b')
        printf("O preco a ser pago eh %.2f",a-a*0.15);
    else if(b=='c')
        printf("O preco a ser pago eh %.2f",a);
    else if(b=='d')
        printf("O preco a ser pago eh %.2f",a+a*0.1);



    return 0;
}
