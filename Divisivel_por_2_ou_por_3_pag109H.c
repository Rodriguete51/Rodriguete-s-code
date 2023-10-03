#include<stdio.h>
#include<math.h>
 int main()
  {
  int A, B, C, D;
  printf("Insira quatro valores inteiros nao nulos:");
  scanf("%i %i %i %i", &A, &B, &C, &D);

  if (A % 2 == 0 || A % 3 == 0)
  {
    if (A % 2 == 0 && A % 3== 0)
  {
  printf("%i e divisivel por 2 e 3.\n", A);
  }
  else if(A % 2 == 0)
  {
  printf("%i e divisivel por 2.\n", A);
  }
  else if (A % 3 == 0)
  {
  printf("%i e divisivel por 3.\n",A);
  }
  }

   if (B % 2 == 0 || B % 3 == 0)
  {
    if (B % 2 == 0 && B % 3== 0)
  {
  printf("%i e divisivel por 2 e 3.\n", B);
  }
   else if(B % 2 == 0)
  {
  printf("%i e divisivel por 2.\n", B);
  }
  else if (B % 3 == 0)
  {
  printf("%i e divisivel por 3.\n", B);
  }
  }



  if (C % 2 == 0 || C % 3 == 0)
  {
    if (C % 2 == 0 && C % 3 == 0)
  {
  printf("%i e divisivel por 2 e 3.\n", C);
  }
  else if(C % 2 == 0)
  {
  printf("%i e divisivel por 2.\n", C);
  }
  else if (C % 3 == 0)
  {
  printf("%i e divisivel por 3.\n", C);
  }
  }




  if (D % 2 == 0 || D % 3 == 0)
  {
    if (D % 2 == 0 && D % 3 == 0)
  {
  printf("%i e divisivel por 2 e 3.\n", D);
  }
 else if(D % 2 == 0)
  {
  printf("%i e divisivel por 2.\n", D);
  }
  else if (D % 3 == 0)
  {
  printf("%i e divisivel por 3.\n", D);
  }
  }


  printf ("Os valores excluidos nao sao divisiveis por 2 ou por 3.");

  }