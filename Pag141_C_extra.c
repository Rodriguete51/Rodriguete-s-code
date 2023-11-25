int main ()
{
    int A, B, C;
    printf("Insira um numero natural: ");
    scanf("%i", &A);
    B=1;
    printf("Os divisores do numero inserido sao: \n");
    while(B<=A)
    {
        C=A%B;
        if(C==0)
        {
            printf("%i \n", B);
        }
        B=B+1;
    }

}