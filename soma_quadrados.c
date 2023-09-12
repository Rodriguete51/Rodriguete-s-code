#include<stdio.h>
#include<math.h>

int main()
{
    int A, A1, B, B1, C, C1, D, D1;
    printf("digite um numero: ");
    scanf("%i",&A);
    printf("digite um numero: ");
    scanf("%i", &B);
    printf("digite um numero: ");
    scanf("%i",&C);
    A1 = A * A;
    printf("o valor do quadrado do primeiro numero e de: %i\n",A1);
    B1 = B * B;
    printf("o valor do quadrado do segundo numero e de: %i\n",B1);
    C1 = C * C;
    printf("o valor do quadrado do terceiro numero e de: %i\n",C1);
    D = A1 + B1 + C1;
    printf("o valor da soma dos tres quadrados e de: %i",D);

}
