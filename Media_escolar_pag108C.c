#include<stdio.h>
#include<math.h>
 int main()
  {
      float N1, N2, N3, N4, MD;
      printf("Insira sua primeira nota: ");
      scanf("%f", &N1);
      printf("Insira sua segunda nota: ");
      scanf("%f", &N2);
      printf("Insira sua terceira nota: ");
      scanf("%f", &N3);
      printf("Insira sua quarta nota: ");
      scanf("%f", &N4);

      MD = (N1+N2+N3+N4) / 4;

      if (MD >= 5)
      {
          printf("Voce foi aprovado\n");
          printf("Sua media foi de %.1f", MD);
      }
      else
      {
          printf("Voce foi reprovado\n");
          printf("Sua media foi de %.1f", MD);
      }
  }