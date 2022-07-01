/*Faça um algoritmo que calcule e mostre a área de um trapézio. Sabe-se que: A = (base maior + base menor)* altura)/2 ; */
#include <stdio.h>

int main(){
    float a,b,c;
    printf("Digite, respectivamente, a base maior, base menor e a altura do trapezio\n");
    scanf("%f %f %f", &a,&b,&c);
    printf("A area do trapezio eh %.2f\n",((a+b)*c/2));
return 0;
}
