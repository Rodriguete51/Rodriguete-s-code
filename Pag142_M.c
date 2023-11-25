#include<stdio.h>
 int main()
 {
     int A;
     float B,C,D;
     C=0;
     A=1;

     while (A<=10)
     {
         printf("Insira um valor real:");
         scanf("%f",&B);
         C=C+B;
         A=A+1;
     }
     D=C/10;
     printf("O somatorio dos valores e igual a %.1f e a media dos valores e de %.1f",C,D);
 }