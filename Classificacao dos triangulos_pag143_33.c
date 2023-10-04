#include<stdio.h>
 int main()
  {
      float L1, L2, L3;
      printf("Insira o valor do lado 1 do triangulo:");
      scanf("%f", &L1);
      printf("Insira o valor do lado 2 do triangulo:");
      scanf("%f", &L2);
      printf("Insira o valor do lado 3 do triangulo:");
      scanf("%f", &L3);

      if (L1 + L2 > L3 && L1 + L3 > L2 && L2 + L3 > L1)
      {

        if (L1 == L2 && L1 == L3)
        {
            printf("O triangulo e equilatero.");
        }
        else if (L1 == 0 && L2 == 0 && L3 == 0)
        {
            printf("O triangulo e invalido");
        }

        else if (L1 == L2 || L1 == L3 || L2 == L3)
        {
            printf("O triangulo e isosceles.");
        }
        else
        {
            printf("O triangulo e escaleno");
        }
      }
      else
      {
          printf("Nao e um triangulo");
      }
  }