/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;
    
    printf("Diga o valor da Primeira Nota: \n");
    scanf("%f", &nota1);
    
    printf("Diga o valor da Segunda Nota: \n");
    scanf("%f", &nota2);
    
    printf("Diga o valor da Terceira Nota: \n");
    scanf("%f", &nota3);
    
    printf("Diga o valor da Quarta Nota: \n");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\nMedia final: %.2f\n", media);

    return 0;
}
