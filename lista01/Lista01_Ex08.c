/*Faça um algoritmo para ler três notas de u*/
#include <stdio.h>

int main(){
    float a, b,c;
    printf("Digite as 3 notas do aluno\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("A media do aluno eh %f ",(a+b+c)/3);
    
 return 0;   
}