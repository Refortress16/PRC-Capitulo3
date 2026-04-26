#include <stdio.h>
#include <stdlib.h>

int main() 
{

int num1, num2, soma;

    printf("Digite dois valores inteiros: \n");
    scanf("%d%d", &num1, &num2);
    
    soma = num1 + num2;
    
    printf("A soma dos valores %d e %d é igual à %d", num1, num2, soma);
    
    return 0;

}