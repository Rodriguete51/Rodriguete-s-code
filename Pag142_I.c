#include<stdio.h>
 int main()
 {
   int B, anterior, atual, proximo;
   B=1;
   anterior=0;
   atual=1;
   printf("Os 15 primeiros termos da sequencia de Fibonacci sao: \n");
   while(B<=15)
   {
     proximo=atual+anterior;
     printf("%i\n", proximo);
     anterior=atual;
     atual=proximo;
     B=B+1;
   }
 }