#include<stdio.h>
#include<math.h>
 int main()
  {
      int A, B, C;
      printf("Digite um numero inteiro: ");
      scanf("%i", &A);
      printf("Digite um numero inteiro: ");
      scanf("%i", &B);

      if (A > B)
      {
          C = A  - B;
          printf("A diferenca do maior para o menor valor e de: %i", C);
      }
      else if (B > A)
      {
          C = B - A;
          printf("A diferenca do maior para o menor valor e de: %i", C);
      }
      else
      {
          printf("Os numeros sao iguais ");
      }
  }