#include<stdio.h>
#include<math.h>
float main()
{
    float P, M;
    printf("digite a medida em pes: ");
    scanf("%f", &P);
    M = P * 0.3048;
    printf("o valor da conversao em metros e de: %f", M);
}