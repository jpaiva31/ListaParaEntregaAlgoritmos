/*Escreva um algoritmo que leia 20 n�meros informados pelo usu�rio e exiba quantos n�meros s�o
maiores do que 8
*/
#include <stdio.h>

int main(){
int n,aux=0;
for(int i=0;i<20;i++){
scanf("%d",&n);
if(n>8)aux++;
}
printf("%d", aux);
return 0;
}
