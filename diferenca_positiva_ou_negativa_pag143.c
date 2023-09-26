#include<stdio.h>
#include<math.h>
float main()
{
 float A, B, C;
 printf("digite um numero: ");
 scanf("%f", &A);
 printf("digite um numero: ");
 scanf("%f", &B);
 C = A - B;
 printf("o resultado da diferenca e: %f\n", C);
 if( C < 0 )
  { printf("a diferenca e menor que zero");
  }
 if( C >= 0 )
  { printf("a diferenca e maior ou igual a zero");
  }
 }