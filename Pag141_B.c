#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Digite um numero para que a tabuada padrao seja calculada: ");
    scanf("%i",&A);
    B=0;

    while (B<=10)
    {
        C = A * B;
        printf("\n%i x %i = %i\n",A,B,C);
        B = B + 1;

    }


}