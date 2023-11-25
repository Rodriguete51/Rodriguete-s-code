#include<stdio.h>
#include<math.h>

int main ()
{
    int A, B, C; 
    A=1;
    B=1;
    C=1;
    while(B<=30)
    {
       C=C+A;
       A=A*2;
       B=B+1;


    }
    printf("Total de graos e igual a: %i +\n", C);

}
