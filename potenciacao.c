#include<stdio.h>
#include<math.h>
int main()
{
    int A, B, C;
    printf("digite a base:");
    scanf("%i", &A);
    printf("digite o expoente:");
    scanf("%i", &B);
    C = pow(A,B);
    printf("o valor da potencia: %i ", C);
}