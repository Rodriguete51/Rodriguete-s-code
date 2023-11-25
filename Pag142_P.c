#include<stdio.h>
 int main()
 {
     int A,B,C;
     B=0;

     for(A=50;A<=70;A+=2)
     {
         B=B+A;

     }
      C=B/10;
      printf("A soma dos valores e de %i e a media e de %i",B,C);
 }