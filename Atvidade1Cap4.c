#include<stdio.h>
#include<stdlib.h>

int main() 
{
    float distancia, combustivel, consumo_medio;

    printf("Digite a distância percorrida (km): ");
    scanf("%f", &distancia);

    printf("Digite o total de combustível gasto (litros): ");
    scanf("%f", &combustivel);

    // Cálculo do consumo
    consumo_medio = distancia / combustivel;

    printf("O consumo médio do automóvel é: %.2f km/l\n", consumo_medio);

    return 0;
}

/* Usei float neste cosigo, 
por conta que o calculo do 
codigo é divisorio (divisao).
*/
