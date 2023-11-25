#include<stdio.h>
 int main()
 {
   float A, B;
   A=10;

   while(A<=100)
   {
     B=A*9/5+32;
     printf("Celsius: %.0f/ Fahrenheit: %.0f\n", A, B);
     A=A+10;
   }
 }