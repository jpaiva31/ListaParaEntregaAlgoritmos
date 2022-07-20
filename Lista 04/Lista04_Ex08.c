/*Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir ler um vetor A de 10 elementos contendo uma aposta.
A seguir imprima quantos pontos fez o apostador.*/
#include <stdio.h>


int main()
{
    int R[5],S[10],cont=0;
    printf("Digite o gabarito da LOTO de 5 numeros\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &R[i]);
    }
    printf("Digite os 10 numeros da sua aposta\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &S[i]);
    }
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(R[j]==S[i])
            {
                cont++;
            }
        }
    }
    printf("Voce acertou %d numeros!\n", cont);

    return 0;
}
