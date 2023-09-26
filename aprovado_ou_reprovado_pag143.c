#include<stdio.h>
#include<math.h>
float main()
{ 
 float NF, N1, N2, N3, P1, P2, P3;
 printf("digite sua nota: ");
 scanf("%f", &N1);
 printf("digite o peso da prova: ");
 scanf("%f", &P1);
 printf("digite sua nota: ");
 scanf("%f", &N2);
 printf("digite o peso da prova: ");
 scanf("%f", &P2);
  printf("digite sua nota: ");
 scanf("%f", &N3);
 printf("digite o peso da prova: ");
 scanf("%f", &P3);
 NF = N1 * P1 + N2 * P2 + N3 * P3 / (P1 + P2 + P3);
 if( NF >= 7 )
  { printf("sua media final foi de %f e com isso vc esta aprovado", NF);
  }
 if ( NF < 7 )
  { printf("sua media final foi de %f e com isso vc esta reprovado", NF);
  }
 }
  
    