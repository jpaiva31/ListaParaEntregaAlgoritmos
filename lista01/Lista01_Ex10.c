/*Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada ponto é um par
ordenado (x,y). */
#include <stdio.h>
#include <math.h>
int main(){
    int x1,x2,y1,y2, distancia;
    printf("Digite, respectivamente,o x e o y dos pontos A e B\n");
    scanf("%d %d %d %d", &x1, &y1,&x2,&y2);
    distancia=pow(pow(x2-x1,2)+pow(y2-y1,2),0.5);
    printf("A distancia entre os dois pontos eh %d ",distancia);
    
 return 0;   
}