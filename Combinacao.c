#include<stdio.h>
#include<math.h>

int main()
{
    int A, B, C, D, AB, AC, AD, AxB, AxC, AxD, BC, BD, BxC, BxD, CD, CxD;
    printf("Digite o valor de A: ");
    scanf("%i", &A);
    printf("Digite o valor de B: ");
    scanf("%i", &B);
    printf("Digite o valor de C: ");
    scanf("%i", &C);
    printf("Digite o valor de D: ");
    scanf("%i", &D);
    AB = A + B;
    AC = A + C;
    AD = A + D;
    printf("AB: %i\n", AB);
    printf("AC: %i\n", AC);
    printf("AD: %i\n\n", AD);
    AxB = A * B;
    AxC = A * C;
    AxD = A * D;
    printf("AxB: %i\n", AxB);
    printf("AxC: %i\n", AxC);
    printf("AxD: %i\n", AxD);
    BC = B + C;
    BD = B + D;
    printf("BC: %i\n", BC);
    printf("BD: %i\n\n", BD);
    BxC = B * C;
    BxD = B * D;
    printf("BxC: %i\n", BxC);
    printf("BxD: %i\n", BxD);
    CD = C + D;
    printf("CD: %i\n\n", CD);
    CxD = C * D;
    printf("CxD: %i\n", CxD);


}
