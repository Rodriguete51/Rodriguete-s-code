#include<stdio.h>
#include<math.h>

float main()
{
    float V, A, R;
    printf("Digite a area: ");
    scanf("%f",&A);
    printf("Digite o raio: ");
    scanf("%f",&R);
    V = 3.14 * pow(R,2) * A;
    printf("O volume da lata e de: %f" ,V);
}
