#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double pi=3.14;
    double circ,area,r;

    printf("r: ");
    do
    {
    if(scanf("%lf",&r) !=1)
    {
        printf("Error: invalid value");
        scanf("%*s");
        continue;
    }
    if(r<=0)
    {
        printf("0 and negative cannot value");
        continue;
    }
    break;
    }while(1);

    circ=2*pi*r;
    area=pi*(r*r);

    printf("Circ: %.2lf\n\nArea: %.2lf",circ,area);


    return 0;
}
