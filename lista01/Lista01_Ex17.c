/*Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça um algoritmo
para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de conversão).  */
#include <stdio.h>

int main(){
    float a;
    printf("Digite a temperatura em celsius\n");
    scanf("%f",&a);
    printf("temperatura em farenheite: %.f\n",a*1.8+32);
return 0;
}
