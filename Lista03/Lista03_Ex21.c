/*O restaurante da quest�o 17 realiza reservas de mesas atrav�s de liga��es telef�nicas e possui 50
mesas dispon�veis para reserva. Dessas mesas, 25 s�o na �rea de fumantes e 25 na �rea de n�o
fumantes. Para cada liga��o recebida, o restaurante deve verificar se a reserva � para a mesa na
�rea de fumantes ou de n�o fumantes e contabilizar a quantidade de mesas restantes dispon�veis
em cada �rea. Construa um algoritmo que realize a reserva das mesas e encerre a execu��o
quando n�o houver mais mesas dispon�veis (nem na �rea de fumantes, nem na �rea de n�o
fumantes).*/

#include <stdio.h>

int main()
{
    int fum=0,nfum=0;
    char a;
    printf("Caso seja na area de fumantes, digite S, caso nao, digite N\n");
    for(int i=0; i<50; i++)
    {
        scanf("%s", &a);
        if(a=='S')
        {
            if(fum==25)
            {
                printf("So tem mesa na area de nao fumantes\n");
                nfum++;
                continue;
            }
            fum++;
        }


        else if(a=='N')
        {
            if(nfum==25)
            {
                printf("So tem mesa na area de fumantes\n");
                fum++;
                continue;
            }
            nfum++;
        }
    }
    printf("Area de fumante: %d\nArea de nao fumantes: %d\n", fum, nfum);

    return 0;
}
