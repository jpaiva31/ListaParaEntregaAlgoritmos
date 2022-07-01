/*A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml, garrafa de 600 ml e
garrafa de 2 litros. Se um comerciante compra uma determinada quantidade de cada formato, faça um algoritmo para
calcular quantos litros de refrigerante ele comprou*/
#include <stdio.h>

int main(){
    float a, b,c, tudo;
    printf("Digite, respectivamente, a quantidade de latas, garrafas de 600ml e garrafa de 2L\n");
    scanf("%f %f %f",&a, &b, &c);
    tudo=0.35*a+0.6*b+2*c;
    printf("Ao todo foram comprados %.3f litros\n",tudo);
return 0;
}
