#include<stdio.h>
#include<math.h>

float main()
{
    float P, V, T, Tx;
    printf("Digite o valor: ");
    scanf("%f", &V);
    printf("Digite o tempo de divida em mes: ");
    scanf("%f", &T);
    printf("Digite a taxa: ");
    scanf("%f", &Tx);
    P = V + (V * (Tx/100) * T);
    printf("O valor da prestacao e de: %f",P);
}
