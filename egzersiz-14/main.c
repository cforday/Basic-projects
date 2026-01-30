#include <stdio.h>
#include <stdlib.h>

int main()
{

    float sonuc,x;
    const float MAX_X = 1000.0f;
    printf("f(x) = x^3 + 13x^2 + 47x + 5\n\n");

    do
    {
    printf("x: ");
    if(scanf("%f",&x)!=1)
    {
        printf("Error. Invalid value");
        scanf("%*s");
        continue;
    }
    if(x<=0)
    {
        printf("Zero and negative values are not allowed.");
        continue;
    }
    if(x>MAX_X)
    {
        printf("x exceeds the allowed limit (%.0f).\n", MAX_X);
        continue;
    }

    break;

    }while(1);

    sonuc=(x*x*x) + (13*x*x) + (47*x) + 5;

    printf("f(%f) = %.2f",x,sonuc);



    return 0;
}
