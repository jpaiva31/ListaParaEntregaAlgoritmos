/*Fa�a um algoritmo escreva a diversas vezes a pergunta �Ol� tudo bem?� e leia a
a. resposta do usu�rio enquanto ele responde n�o. S� encerre a execu��o quando a resposta
for igual a �Sim�.
*/
#include <stdio.h>

int main(){
char n[100];

while(n[0]!='s'&&n[1]!='i'&&n[2]!='m'){
printf("Tudo bem?\n");
scanf("%s",n);
}

return 0;
}
