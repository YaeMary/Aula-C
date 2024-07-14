#include<stdio.h>

int main()      //a rotina principal não precisa ser float ou inteiro apenas as variáveis
{
    inteiro a, b, c;
    
    printf("Digite um número inteiro: ");
        scanf("%i", &a);
    printf("Digite outro número inteiro: ");
        scanf("%i", &b);
c = a * b;
    printf("O resultado de %i x %i é igual a %i", a, b, c);
}
