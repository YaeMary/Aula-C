#include<stdio.h>

int main()      //a rotina principal não precisa ser float apenas as variáveis
{
    float a, b, c;
    
    printf("Digite um número decimal: ");
        scanf("%f", &a);
    printf("Digite outro número decimal: ");
        scanf("%f", &b);
c = a * b;
    printf("O resultado de %f x %f é igual a %f", a, b, c);
}
