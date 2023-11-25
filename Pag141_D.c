#include<stdio.h>
int main()
{
    int A,B,C;
    A=0;
    B=0;
    while (A<=500)
    {
        B = B + A;
        A = A + 2;

    }
   printf("O numeros pares entre 0 e 500 somados resultam em: %i",B);

}