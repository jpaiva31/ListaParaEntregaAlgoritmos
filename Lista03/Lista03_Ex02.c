/*Escreva um algoritmo que calcule o somat�rio dos n�meros de um intervalo informado pelo
usu�rio*/

#include <stdio.h>

int main(){
int a,b,aux;
scanf("%d %d", &a,&b);
if(b<a){
    aux=a;
    a=b;
    b=aux;
    aux=0;
}
a++;
while(a!=b){
    aux+=a;
    a++;
}
printf("%d", aux);
return 0;
}
