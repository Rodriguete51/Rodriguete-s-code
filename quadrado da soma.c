#include<stdio.h>
#include<math.h>

int main()
{
    int A, B, C, D, S;
    printf("digite um numero: ");
    scanf("%i",&A);
    printf("digite um numero: ");
    scanf("%i",&B);
    printf("digite um numero: ");
    scanf("%i",&C);
    S = A + B + C;
    printf("o valor da soma desses tres numeros e de: %i\n",S);
    D = S * S;
    printf("o valor do quadrado da soma e de: %i",D);

}
