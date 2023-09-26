#include<stdio.h>
#include<math.h>

float main()
{
    float L1, L2, L3, L4;
    printf("digite o primeiro lado: ");
    scanf("%f", &L1);
    printf("digite o segundo lado: ");
    scanf("%f", &L2);
    printf("digite o terceiro lado: ");
    scanf("%f", &L3);
    printf("digite o quarto lado: ");
    scanf("%f", &L4);
    if(L1 == 0,L2 == 0,L3 == 0,L4 == 0)
    {
        printf("numeros invalidos");
    }

    else if( L1 == L2 && L1 == L3 && L2 == L4)
    {
        printf("o retangulo tambem e um quadrado");
    }
    else if(L1 == 0,L2 == 0,L3 == 0,L4 == 0)
    {
        printf("numeros invalidos");
    }

    else
    {
        printf("o retangulo nao e um quadrado");
    }


}
