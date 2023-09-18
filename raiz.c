#include<stdio.h>
#include<math.h>
float main()
{
    float A, B, C, D;
    printf("digite o indice: ");
    scanf("%f", &A);
    printf("digite o radical: ");
    scanf("%f", &B);
    C = 1 / A;
    D = pow(B,C);
    printf("a raiz e: %f", D);
}