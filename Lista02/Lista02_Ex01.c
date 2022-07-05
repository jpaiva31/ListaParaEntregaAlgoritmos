#include <stdio.h>

int main()
{
    int a,b;
    printf("digite dois numeros\n");
    scanf("%d %d", &a,&b);
    if(a>=b)printf("o maior numero eh %d", a);
    else printf("o maior numero eh %d", b);

    return 0;
}
