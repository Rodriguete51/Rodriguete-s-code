#include<stdio.h>
#include<math.h>

float main()
 {
     float V, C, A, L;
     printf("digite a largura: ");
     scanf("%f", &L);
     printf("digite o comprimento: ");
     scanf("%f", &C);
     printf("digite a altura: ");
     scanf("%f", &A);
     V = C * L * A;
     printf("o volume da caixa e de: %f", V);
 }
