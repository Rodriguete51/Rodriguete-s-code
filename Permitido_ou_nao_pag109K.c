#include<stdio.h>
 int main()
  {
      int A;
      printf("Digite um numero inteiro: ");
      scanf("%i", &A);

      if (A >= 1 && A <= 9)
      {
          printf("O valor e permitido.");
      }
      else
      {
          printf("O valor nao e permitido.");
      }
  }