/*Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano. Esqueça
a questão dos anos bissextos e considere sempre que um mês possui 30 dias*/
#include <stdio.h>

int main(){
    int a, b, dias;
    printf("Digite, respectivamente, o dia e o mes\n");
    scanf("%d %d", &a, &b);
    dias=(30*(b-1))+a-1;
    printf("Se passaram %d dias desde o inicio do ano",dias);
    
 return 0;   
}