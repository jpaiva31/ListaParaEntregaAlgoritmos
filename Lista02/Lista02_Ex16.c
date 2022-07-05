/*Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. Faça
um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo médio e o valor do crédito.

Saldo medio    Percentual
De 0 a 200     Nenhum credito
De 201 a 400   20%
De 401 a 600   30%
Acima de 601   40%
*/

#include <stdio.h>

int main()
{
    int a;
    printf("Digite o saldo medio do cliente\n");
    scanf("%d", &a);
    if(a>=0&&a<=200)printf("Seu credito eh %.2f", a);
    else if(a>200&&a<=400)printf("Seu credito eh %.2f", a+a*0.2);
    else if(a>400&&a<=600)printf("Seu credito eh %.2f", a+a*0.3);
    else if(a>600)printf("Seu credito eh %.2f", a+a*0.4);

    return 0;
}
