#include<stdio.h>

int main ()
{
   int A, B, C;
   printf("Digite um valor para A: ");
   scanf("%i", &A);
   printf("Digite um valor para B: ");
   scanf("%i", &B);
   printf("Digite um valor para C: ");
   scanf("%i", &C);

   if (A > B && B > C)
   {
     printf("A ordem crescente e: %i < %i < %i", C, B, A);
   }


   else if (A > C && C > B)
   {
    printf("A ordem crescente e: %i < %i < %i", B, C, A);
    }


      else if (B > A && A > C)
   {
    printf("A ordem crescente e: %i < %i < %i", C, A, B);
    }


     else if (B > C && C > A)
   {
    printf("A ordem crescente e: %i < %i < %i", A, C, B);
    }


     else if (C > A && A > B)
   {
    printf("A ordem crescente e: %i < %i < %i", B, A, C);
    }


     else if (C > B && B > A)
   {
    printf("A ordem crescente e: %i < %i < %i", A, B, C);
    }

     else if (A == C && C == B)
   {
    printf("A ordem crescente e: %i = %i = %i", B, C, A);
    }

     else if (A == B && B > C)
   {
    printf("A ordem crescente e: %i < %i = %i", C, A, B);
    }

     else if (C > A && A == B)
   {
    printf("A ordem crescente e: %i = %i < %i", B, A, C);
    }

     else if (A == C && C > B)
   {
    printf("A ordem crescente e: %i < %i = %i", B, C, A);
    }

     else if (B > C && C == A)
   {
    printf("A ordem crescente e: %i = %i < %i", C, A, B);
    }

     else if (C == B && B > A)
   {
    printf("A ordem crescente e: %i < %i = %i", A, B, C);
    }

    else if (A > B && B == C)
   {
    printf("A ordem crescente e: %i = %i < %i", C, B, A);
    }
    else
    {
     printf("Operacao invalida");
    }

    }