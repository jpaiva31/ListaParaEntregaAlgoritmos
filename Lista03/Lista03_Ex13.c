/*Escreva um algoritmo que leia uma sequ�ncia de n�meros do usu�rio e realize a soma desses
n�meros. Encerre a execu��o quando um n�mero negativo for digitado
*/
#include <stdio.h>

int main(){
int n,aux=0;
scanf("%d",&n);
aux=n;
while(n>=0){
scanf("%d",&n);
if(n<0)break;
aux+=n;
}
printf("%d", aux);

return 0;
}
