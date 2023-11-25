#include<stdio.h>
int main()
{
    int A,B;
    A=15;
    printf("Os quadrados dos numeros entre 15 e 200 sao:\n");

    while (A>=15&&A<=200)
    {
        B = A*A;
        printf("%i\n",B);
        A = A+1;

    }
}