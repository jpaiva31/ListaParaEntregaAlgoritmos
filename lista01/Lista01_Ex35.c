/*Faça um algoritmo que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal_maior * diagonal_menor)/2; */
#include <stdio.h>

int main(){
    float a, b;
    printf("Digite, respectivamente, a diagonal maior e a menor do losango\n");
    scanf("%f %f", &a,&b);
    printf("A area do losango eh %.2f\n",a*b/2);
return 0;
}
