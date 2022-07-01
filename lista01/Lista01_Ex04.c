/*Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida ela possui.
Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma pessoa com 19 anos possui
6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935 DIAS */
#include <stdio.h>

int main(){
    double a;
    char nome[30];
    printf("Digite, respectivamente, o nome e a idade\n");
    scanf("%s %lf",&nome, &a);
    printf("%s ja viveu %.lf dias.",nome,a*365);
 return 0;   
}
