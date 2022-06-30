#include <stdio.h>
/*A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia.
Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado).
Você foi contratado para fazer os cálculos para o dono. Com base nestes fato */
int main(){
    float a,b,total;
    printf("digite, respectivamente, a quantidade de paezinhos e broas que foram vendidos\n");
    scanf("%f %f", &a, &b);
    total= (a*0.12)+(b*1.5);
    printf("Voce lucrou %f e deve guardar %f na poupanca",total,total*0.10);
    return 0;
}