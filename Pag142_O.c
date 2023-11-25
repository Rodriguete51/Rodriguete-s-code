#include<stdio.h>
#include<math.h>

 int main ()
  {
      int A,B,C;
      C=1;
      B=1;
      for (A=1;A<=9;A++)
      {
       B=B*A;
       if(A%2==1)
       {
           printf("%i = %i\n",A, B);
       }

      }

  }