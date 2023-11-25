#include<stdio.h>
 int main()
 {
   int A,B;
   A=1;
   printf("Valores numericos divisiveis por 4 e menores que 200:\n");
   while(A<200)
   {
     B = A % 4;
     if(B==0)
     {
      printf("%i\n", A);
     }
     A=A+1;
   }
 }