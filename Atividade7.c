
#include <stdio.h>

int main()
{
    float polegadas, centimetros;
    printf("diga a quantidade de polegadas: \n");
    scanf("%f", &polegadas);
    
 printf("Centimetros: %.2f\n", polegadas * 2.54);
    return 0;
}