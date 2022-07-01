/*Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. Faça um
algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais.
 Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de
um tipo, a quantidade respectiva é zero*/
#include <stdio.h>

int main(){
    float a, b,c,d,e,f,tudo;
    printf("Digite, respectivamente, a quantidade de moedas de 1,5,10,25,50 centavos e de 1 real.\n");
    scanf("%f %f %f %f %f %f",&a, &b, &c,&d, &e, &f);
    tudo=0.01*a+0.05*b+0.1*c+0.25*d+0.5*e+f;
    printf("Ao todo foram economizados %f reais\n",tudo);
return 0;
}
