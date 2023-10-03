#include<stdio.h>
#include<math.h>
 int main()
   {
       float A, B, C, delta;
       printf("Insira o valor de A: ");
       scanf("%f", &A);
       printf("Insira o valor de B: ");
       scanf("%f", &B);
       printf("Insira o valor de C: ");
       scanf("%f", &C);

       if (A !=0 && B !=0 && C !=0)
       {
           delta = (B * B) - (4 * A * C);
            if (delta > 0)
            {
                printf("Existem duas solucoes reais.");
            }
            else if (delta < 0)
            {
                printf("Nao existe solucao real.");
            }
            else
            {
                printf("Existe apenas uma solucao real.");
            }
       }
       else
       {
           printf("Operacao invalida");
       }
   }