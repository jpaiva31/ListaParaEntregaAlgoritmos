/*Uma escola faz o pagamento de seus professores por hora/aula. Fa�a um algoritmo que solicite ao usu�rio, o
n�vel do professor e a quantidade de horas/aula ele tem na semana. Em seguida, calcule e exiba o sal�rio de
um professor sabendo que a f�rmula para o c�lculo do sal�rio � salario = valorHoraAula * QtdAula * 4.5. O valor
da hora/aula do professor � dado em fun��o do seu n�vel:
Professor N�vel 1 R$12,00 por hora/aula
Professor N�vel 2 R$17,00 por hora/aula
Professor N�vel 3 R$25,00 por hora/aula
*/

#include <stdio.h>

int main()
{
    int a,b;
    printf("Digite respectivamente, a quantidade de horas/aula e seu nivel:\n");
    scanf("%d %d", &a,&b);
    if(b==1) printf("Seu salario: %.2f", 12*a*4.5);
    else if(b==2) printf("Seu salario: %.2f", 17*a*4.5);
    else if(b==3) printf("Seu salario: %.2f", 25*a*4.5);

    return 0;
}
