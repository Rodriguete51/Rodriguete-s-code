#include<stdio.h>
#include<math.h>

float main()
{
    float R, C, D;
    printf("digite o valor em dolar: ");
    scanf("%f",&R);
    printf("digite o valor da cotacao do dolar: ");
    scanf("%f",&C);
    D = R/C;
    printf("o valor em real sera de: %f",D);
}
