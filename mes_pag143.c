#include<stdio.h>
#include<math.h>
int main()
{ 
  int M;
  printf("digite um numero: ");
  scanf("%i", &M);
  switch(M)
   {
    case 1:
     printf("o mes correspondente e janeiro");
     break;
    case 2:
     printf("o mes correspondente e fevereiro");
     break;
    case 3:
     printf("o mes correspondente e marco");
     break;
    case 4:
     printf("o mes correspondente e abril");
     break;
    case 5:
     printf("o mes correspondente e maio");
     break;
    case 6:
     printf("o mes correspondente e junho");
     break;
    case 7:
     printf("o mes correspondente e julho");
     break;
    case 8:
     printf("o mes correspondente e agosto");
     break;
    case 9:
     printf("o mes correspondente e setembro");
     break;
    case 10:
     printf("o mes correspondente e outubro");
     break;
    case 11:
     printf("o mes correspondente e novembro");
     break;
    case 12:
     printf("o mes correspondente e dezembro");
     break;
    default:
     printf("nao existe mes correspondente");
     break;
    }
   }
  
  
  