#include<stdio.h>
#include<math.h>
float main()
{
    float V, Pi, R, A;
    scanf("%f",&R);
    scanf("%f",&A);
    Pi = 3.14;
    V = Pi * pow(R,2) * A;
    printf("%f",V);
}
