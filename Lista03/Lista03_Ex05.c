/*Escreva um algoritmo que leia 10 n�meros informados pelo usu�rio e calcule a soma desses
n�meros
*/
#include <stdio.h>

int main(){
int n,aux=1;
scanf("%d",&n);
for(int i=0;i<9;i++){
scanf("%d",&n);
aux+=n;
}
printf("%d", aux);
return 0;
}
