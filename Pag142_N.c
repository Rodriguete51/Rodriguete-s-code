#include<stdio.h>
 int main()
 {

     float A,B,C;
     B=0;
     C=0;
     do
     {
         printf("Insira um numero (caso tenha terminado, digite 0 para receber os resultados):");
         scanf("%f",&A);
         C=C+A;
         B=B+1;
     }
     while(A=0 || A>0);
        printf(" Somatorio= %.0f\n Media= %.2f\n Total de valores= %.0f", C,C/(B-1), B-1);
 }