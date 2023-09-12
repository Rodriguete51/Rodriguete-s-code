#include<stdio.h>
#include<math.h>

float main()
{
    float A, B, C, D;
    printf("digite um numero: ");
    scanf("%f", &A);
    printf("digite um numero: ");
    scanf("%f", &B);
    C = A - B;
    printf("o resultado da subtracao e de: %f\n", C);
    D = pow(C,2);
    printf("o resultado da potencia e de: %f", D);
}
