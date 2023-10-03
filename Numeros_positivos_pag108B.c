#include<stdio.h>
 int main()
   {
       int A, B;
       printf("Digite um numero inteiro: ");
       scanf("%i", &A);

       if (A >= 0)
       {
           printf("Esse valor e igual a: %i", A);
       }
       else
       {
           B= A * (-1);
           printf("Transformando esse valor em positivo, temos: %i", B);
       }

   }