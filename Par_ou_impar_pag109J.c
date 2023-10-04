#include<stdio.h>
#include<math.h>
 int main()
   {
       int A;
       printf("Digite um numero inteiro: ");
       scanf("%i", &A);

       if (A % 2 == 0)
       {
           printf("O numero e par.");
       }
       else
       {
           printf("O numero e impar.");
       }
   }