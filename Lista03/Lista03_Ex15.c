/*Desenvolva um algoritmo capaz de apresentar na tela o fatorial de um n�mero inteiro informado
pelo usu�rio.

*/
#include <stdio.h>

int main(){
int n,fat;
scanf("%d", &n);
fat=n;
n--;
while(n!=0){
fat*=n;
n--;
}
printf("%d", fat);
return 0;
}
