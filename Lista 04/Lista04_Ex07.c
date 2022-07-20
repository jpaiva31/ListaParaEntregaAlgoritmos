/*Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a
R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X.*/
#include <stdio.h>


int main()
{
    int R[5],S[10],X[5],cont=0;
    printf("Digite os 5 numeros do vetor R\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &R[i]);
    }
    printf("Digite os 10 numeros do vetor S\n");
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
                X[cont]=R[j];
                cont++;
            }
        }
    }
    printf("Numeros comuns aos dois vetores:\n");
    for(int i=0; i<cont; i++)
    {
        printf("%d\n",X[i]);
    }
    return 0;
}
