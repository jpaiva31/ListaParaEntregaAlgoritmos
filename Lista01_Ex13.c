/*Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma: CENTENA = x
DEZENA = x
UNIDADE = x*/
#include <stdio.h>

int main(){
    int a;
    printf("Digite o numero\n");
    scanf("%d", &a);
    printf("CENTENA = %d\nDEZENA = %d\nUNIDADE = %d\n",(a/100)%10 , (a/10)%10, a%10);
return 0;
}
