#include<stdio.h>
#include<math.h>
float main()
{ 
 float VH, QHT, PD, SB, VD, SL;
 printf("digite o valor da hora-aula: ");
 scanf("%f", &VH);
 printf("digite a quantidade de horas trabalhadas: ");
 scanf("%f", &QHT);
 printf("digite o percentual de desconto: ");
 scanf("%f", &PD);
 SB = VH * QHT;
 VD = SB * (PD / 100);
 SL = SB - VD;
 printf("seu salario liquido sera de: %f", SL);}
 