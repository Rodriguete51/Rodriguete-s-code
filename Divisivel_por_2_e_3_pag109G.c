#include<stdio.h>
#include<math.h>
 int main()
  {
  int A, B, C , D;
  printf("Insira quatro numeros inteiros:");
  scanf("%i %i %i %i", &A, &B, &C, &D);

  if (A % 2 == 0 && A % 3 == 0)
  {
  printf("%i e divisivel por 2 e 3.\n", A);
  }
   if (B % 2 == 0 && B % 3 == 0)
  {
  printf("%i e divisivel por 2 e 3.\n", B);
  }
  if (C % 2 == 0 && C % 3 == 0)
  {
  printf("%i e divisivel por 2 e 3.\n", C);
  }
  if (D % 2 == 0 && D % 3 == 0) 
  {
  printf("%i e divisivel por 2 e 3.\n", D);
  }


  printf ("Os valores excluidos nao sao divisiveis por 2 e por 3 ao mesmo tempo.");

  }