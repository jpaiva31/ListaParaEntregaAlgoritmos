/*Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais.
Construa um algoritmo em que o usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes
a uma venda, e a máquina informe quanto será o valor arrecadado*/
#include <stdio.h>

int main(){
    float a, b,c, total;
    printf("Digite, respectivamente, a quantidade de camisas pequenas, medias e grandes\n");
    scanf("%f %f %f", &a, &b, &c);
    total=a*10.0+b*12.0+c*15.0;
    printf("O valor total arrecadado eh %f ",total);
    
 return 0;   
}