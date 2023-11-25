#include<stdio.h>
int main()
{
    int A,B;
    A=1;
    B=0;

    while (A<=100)
    {
    B = B + A;
    A = A + 1;
    }
    printf("O cem primeiros numeros naturais somados resultam em: %i",B);
}