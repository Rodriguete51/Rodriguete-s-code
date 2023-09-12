#include<stdio.h>
#include<math.h>

float main()
{
    float R, C, D;
    printf("digite o valor em dolar: ");
    scanf("%f",&D);
    printf("digite o valor da cotacao do dolar: ");
    scanf("%f",&C);
    R = C * D;
    printf("o valor em real sera de: %f",R);
}
