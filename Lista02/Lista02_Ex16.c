/*Um banco conceder� um cr�dito especial aos seus clientes, vari�vel com o saldo m�dio no �ltimo ano. Fa�a
um algoritmo que leia o saldo m�dio de um cliente e calcule o valor do cr�dito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito.

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
