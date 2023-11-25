#include<stdio.h>
 int main()
 {
   int A, B, C, D;
   printf("Insira o valor da base: ");
   scanf("%i", &A);
   printf("Insira o valor do expoente: ");
   scanf("%i", &B);
   C=1;
   D=1;
   while(C<=B)
   {
     D=D*A;
     C=C+1;
   }
   printf("Resultado: %i ", D);
 }