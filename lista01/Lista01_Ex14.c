/*Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um bar. Faça um algoritmo para
ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que Carlos e André não paguem centavos.
Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53
para Felipe. */
#include <stdio.h>

int main(){
    float a, carlos, andre, felipe;
    int j;
    printf("Digite o valor da conta\n");
    scanf("%f", &a);
    j=a/3;
    felipe=2*(a/3-j)+(a/3);
    printf("Carlos vai pagar: %d\nAndre vai pagar: %d\nFelipe vai pagar %.2f\n",j,j, felipe );
return 0;
}
