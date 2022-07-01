/*Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a. a idade dessa pessoa em anos;
b. a idade dessa pessoa em meses;
c. a idade dessa pessoa em dias
d. a idade dessa pessoa em semanas. */
#include <stdio.h>

int main(){
    int a, b,c,d,ano,mes,dia,semana;
    printf("Digite, respectivamente, o dia de nascimento, o mes, o ano e o ano atual\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    ano=d-c;
    mes=12*(d-c)+(12-b)-11;
    dia=mes*30;
    semana=dia*7;
    printf("Idade em anos: %d\nIdade em meses: %d\nIdade em dias: %d\nIdade em semanas: %d",ano,mes,dia,semana);



return 0;
}
