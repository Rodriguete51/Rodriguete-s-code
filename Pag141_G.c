#include<stdio.h>
 int main()
 {
   int A,B,C;
   A=1;
   B=3;
   C=1;
   while(A<=15)
   {
     C = C * B;
     A = A + 1;
     printf("O resultado de 3 elevado a %i e: %i\n", A-1,C);
   }
 }