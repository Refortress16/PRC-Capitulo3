#include <stdio.h>
#include <stdlib.h>

int main() 
{

int kg, grama;

    printf("Digite o valor de Kilograma: \n");
    scanf("%d", &kg);
    
    grama = kg * 1000;
    
    printf("O valor  de gramas é = %d", grama);
    
    return 0;

}