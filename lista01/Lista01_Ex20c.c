/*Uma confecção produz X blusas de lã e para isto gasta uma certa quantidade de novelos. Faça um algoritmo
para calcular quantos novelos foram gastos*/
#include <stdio.h>

int main(){
    float a,b;
    printf("Digite, respectivamente, quantos novelos sao gastos por blusa e quantas blusas deseja fazer\n");
    scanf("%f %f",&a, &b);
    printf("Voce precisara de %.f novelos\n",a*b);
return 0;
}
