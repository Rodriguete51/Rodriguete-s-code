#include<stdio.h>
 int main()
  {
      float N1, N2, N3, N4, NE, MD1, MD2;

      printf("Insira sua primeira nota: ");
      scanf("%f", &N1);
      printf("Insira sua segunda nota: ");
      scanf("%f", &N2);
      printf("Insira sua terceira nota: ");
      scanf("%f", &N3);
      printf("Insira sua quarta nota: ");
      scanf("%f", &N4);

      MD1 = (N1+N2+N3+N4) / 4;

      if (MD1 >= 7)
      {
          printf("Voce foi aprovado \n");
          printf("Sua media foi de %.1f", MD1);
      }
      else
      {
          printf("Insira sua nota de exame: ");
          scanf("%f", &NE);
          MD2 = (NE+MD1) / 2;

          if (MD2 >= 5)
          {
            printf("Voce foi aprovado em exame \n");
            printf("Sua media foi de %.1f", MD2);
          }
          else
          {
            printf("Voce foi reprovado em exame \n");
            printf("Sua media foi de %.1f", MD2);
          }

      }
  }