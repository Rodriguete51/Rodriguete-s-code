#include<stdio.h>
#include<math.h>

float main()
{
 float V, D, T;
 printf("digite a distancia percorrida: ");
 scanf("%f", & D);
 printf("digite o tempo gasto: ");
 scanf("%f", &T);
 V = (D * 1000) / (T * 60);
 printf("sua velocidade media foi de : %f m/s", V);}