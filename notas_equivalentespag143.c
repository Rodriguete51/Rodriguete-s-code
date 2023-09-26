#include<stdio.h>
#include<math.h>

float main()
{
    float A;
    printf("digite sua nota: ");
    scanf("%f", &A);
    if (A > 9)
    {
        printf("sua nota correspondente e: A ");
    }
    else if( 7 < A && A <= 9 )
    {
        printf("sua nota correspondente e: B ");
    }
    else if( 5 < A && A<= 7 )
    {
        printf("sua nota correspondente e: C ");
    }
    else if( 3.5 < A && A<= 5 )
    {
        printf("sua nota correspondente e: D ");
    }
    else if( A <= 3.5 )
    {
        printf("sua nota correspondente e: E ");
    }


}

