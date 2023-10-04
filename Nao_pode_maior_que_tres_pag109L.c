#include<stdio.h>
 int main()
 {
    int A;

    printf("Digite u numero inteiro: ");
    scanf("%i", &A);

    if (!(A > 3)) // caso seja digitado um numero maior que 3, o algoritmo nao vai responder
        {
        printf("O numero digitado foi %i", A);
        }
 }