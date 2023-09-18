#include<stdio.h>
#include<math.h>
float main()
{
    float V, R;
    printf("digite o raio da esfera: ");
    scanf("%f", &R);
    V = (4 / 3) * 3.14159 * pow(R,3);
    printf("o volume da esfera e de: %f", V);
}