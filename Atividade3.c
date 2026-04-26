#include <stdio.h>
#include <stdlib.h>

int main() 
{

int num1, num2, num3, soma;

    printf("Digite tres valores inteiros: \n");
    scanf("%d%d", &num1, &num2, &num3);
    
    soma = num1 + num2, num3;
    
    printf("A soma dos valores %d, %d e %d é igual à %d", num1, num2, num3, soma);
    
    return 0;

}
