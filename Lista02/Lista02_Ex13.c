/*Escrever um algoritmo que leia um valor em reais e calcule qual o menor número possível de notas de 100,
50, 10, 5 e 1 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de notas necessárias.
*/

#include <stdio.h>

int main()
{
    int a,b=0,c=0,d=0,e=0,f=0;
    printf("Digite um valor inteiro:\n");
    scanf("%d", &a);
    if(a>100)
    {
        b=a/100;
        a=(a)%100;
        printf("UI%d\n", a);
    }
    if(a>50)
    {
        c=a/50;
        a=(a)%50;
        printf("UI%d\n", a);
    }
    if(a>10)
    {
        d=a/10;
        a=(a)%10;
        printf("UI%d\n", a);
    }
    if(a>5)
    {
        e=a/5;
        a=(a)%5;
        printf("UI%d\n", a);
    }
    if(a>1)
    {
        f=a/1;
        a=(a)%1;
        printf("UI%d\n", a);
    }

    printf("%d notas de 100\n%d notas de 50\n%d notas de 10\n%d notas de 5\n%d notas de 1", b,c,d,e,f);
    return 0;
}
