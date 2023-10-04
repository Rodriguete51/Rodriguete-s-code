#include<stdio.h>
#include<math.h>
 int main()
  {
      float N1 ,N2;
      float R;
      char O;

      printf("Digite a operacao desejada, incluindo os valores, (use '+' para mais, '-' para menos, '*' para multiplicacao e '/' para divisao): \n");
      scanf("%f", &N1);
      scanf("%c", &O);
      scanf("%f", &N2);

      switch (O)
      {
          case '+':
          R = N1 + N2;
          printf("O resultado da soma e: %.1f", R);
          break;

          case '-':
          R = N1 - N2;
          printf("O resultado da subtracao e: %.1f", R);
          break;

          case '*':
          R = N1 * N2;
          printf("O resultado da multiplicacao e: %.1f", R);
          break;

          case '/':
          R = N1 / N2;
          printf("O resultado da divisao e: %.1f", R);
          break;

          default:
            printf("Operacao invalida.");
      }

  }