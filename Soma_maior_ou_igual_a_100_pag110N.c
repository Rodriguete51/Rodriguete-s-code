#include<stdio.h>
 int main()
  {
      int A, B, C, soma;

      printf("Digite um numero inteiro: ");
      scanf("%i", &A);
      printf("Digite um numero inteiro: ");
      scanf("%i", &B);
      printf("Digite um numero inteiro: ");
      scanf("%i", &C);



      soma = A + B +C;

      if (soma >= 100)
      {
          printf("Resultado da soma e: %i", soma);
      }
      else
      {
          printf("Nao ha resultado a ser apresentado.");
      }
  }