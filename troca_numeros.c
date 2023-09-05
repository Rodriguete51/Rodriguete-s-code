#include<stdio.h>
#include<math.h>

int main()
{
    int A, B, C;
     printf("Digite A: ");
     scanf("%i", &A);
     printf("Digite B: ");
     scanf("%i", &B);
     C = A;
     A = B;
     B = C;
     printf("O novo valor de A e: %i\n", A);
     printf("O novo valor de B e: %i\n", B);
}
