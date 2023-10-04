#include<stdio.h>
 int main()
  {
      int A , B;

      printf("Digite um numero inteiro: ");
      scanf("%i", &A);

      B = A * 2;

      if (B > 30)
      {
          printf("O dobro do numero e: %i", B);
      }
      else
      {
          printf("Nao ha valor a ser informado.");
      }
  }