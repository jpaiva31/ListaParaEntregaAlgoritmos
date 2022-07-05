/*Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso
ideal, utilizando as seguintes fórmulas:
● para homens: (72.7 * h) – 58;
● para mulheres: (62.1 * h) – 44.7.  */

#include <stdio.h>

int main()
{
    float a;
    char b;
    printf("Digite, respectivamente, a altura e genero da pessoa(m/f):\n");
    scanf("%f %c", &a, &b);

    if(b=='m')
    printf("seu peso ideal eh %.2f",(a*72.7)-58);
    else if(b=='f')
    printf("seu peso ideal eh %.2f",(a*62.1)-44.7);


    return 0;
}
