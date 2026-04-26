/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("A = %d e B = %d\n", A, B);

    printf("Soma: %d\n", A + B);
    printf("Subtracao: %d\n", A - B);
    printf("Multiplicacao: %d\n", A * B);

    if (B != 0)
        printf("Divisao: %.2f\n", (float)A / B);
    else
        printf("Divisao: impossivel (divisao por zero)\n");

    return 0;
}
