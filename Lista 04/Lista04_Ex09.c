/*Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor
após a retirada dos nulos e negativos.*/
#include <stdio.h>

int main(){
int D[10], aux[10],cont=0;
printf("Digite os 10 elementos do vetor D:\n");
for(int i=0;i<10;i++){
    scanf("%d", &D[i]);
}
for(int i=0;i<10;i++){
    if(D[i]<1){continue;}
    aux[cont]=D[i];
    cont++;
}
for(int i=0;i<cont;i++){
    D[i]=aux[i];
}
while(cont<10){
    D[cont]=NULL;
    cont++;
}
for(int i=0;D[i]!=NULL;i++)printf("%d\n",D[i]);
return 0;
}
