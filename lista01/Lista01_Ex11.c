/*Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para
converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias.*/
#include <stdio.h>

int main(){
    int a,anos, meses, dias;
    printf("digite a quantidade de dias sem acidente\n");
    scanf("%d", &a);
    anos=a/365;
    meses=(a%365)/30;
    dias=((a%365)%30);
    printf("A empresa esta ha %d anos %d meses e %d dias sem nenhum acidente", anos, meses, dias);
return 0;
}
