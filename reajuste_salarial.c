#include<stdio.h>
#include<math.h>

float main()
{
 float SM, PR, NS;
 printf("digite seu salario mensal:");
 scanf("%f", &SM);
 printf("digite o percentual de reajuste:");
 scanf("%f", &PR);
 NS = SM + (1 + PR/100);
 printf("o seu novo salario e de: %f", NS);}
