#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double ratio=1.609;
    double mil,calc;

    printf("How many miles: ");
    scanf("%lf",&mil);
    calc=ratio*mil;

    printf("Your calculation is in kilometers %.3lf",calc);


    return 0;
}
