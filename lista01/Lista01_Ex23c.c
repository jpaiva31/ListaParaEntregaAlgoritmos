/*Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o � suficientemente longa. Assumindo que seja poss�vel
medir sua sombra e a do pr�dio no ch�o, e que voc� lembre da sua altura, fa�a um algoritmo para ler os dados necess�rios e calcular a
altura do pr�dio. */
#include <stdio.h>

int main(){
    float a,b,c,conta;
    printf("Digite, respectivamente, sua altura, a altura da sua sombra e a altura da sombra do predio\n");
    scanf("%f %f %f",&a,&b,&c);
    conta=(c*a)/b;
    printf("A altura do predio eh %f \n",conta);
return 0;
}
