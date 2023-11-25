#include<stdio.h>
 int main()
 {
     int A,B,C,D,E;
     D=1;
     B=0;
     C=0;

     while(C<=14)
     {
         E=1;
         printf("Insira um numero inteiro:");
         scanf("%i",&D);
         A=D;
         do
         {

             D=D*E;
             E=E+1;

         }
         while (E<=A-1);
        B=B+D;
        C=C+1;
     }
     printf("\nA soma dos fatoriais de todos os valores e de: %i\n",B);

 }