#include<stdio.h>
#include<math.h>
float main()
{ 
  float A, B, C, D;
  printf("digite o valor total da compra: ");
  scanf("%f", &A);
  printf("digite o valor entregue: ");
  scanf("%f", &B);
  C = A - B;
  D = C*-1;
  if( C < 0 )
   { printf("o valor do troco devera ser de %fR$", D);
   }
  if( C == 0 )
   { printf("nao sera necessario troco");
   }
  if( C > 0 )
   { printf("sera necessario mais %fR$ para pagar a conta", C);
   }
  }
    
  