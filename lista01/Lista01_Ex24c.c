/*Um tonel de refresco � feito com 8 partes de �gua mineral e 2 partes de suco de maracuj�. Fa�a um algoritmo para calcular
quantos litros de �gua e de suco s�o necess�rios para se fazer X litros de refresco (informados pelo usu�rio).*/
#include <stdio.h>

int main(){
    float a;
    printf("Digite a quantidade de suco que voce quer fazer\n");
    scanf("%f",&a);
    printf("Voce precisara usar %.2f de agua e %.2f de suco de maracuja\n",a*0.8,a*0.2);
return 0;
}
