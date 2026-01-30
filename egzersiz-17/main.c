#include <stdio.h>
#include <stdlib.h>

int main()
{
    double length,width,depth,cubicMeter;

    //UZUNLUK HESAPLAMA
    do
    {
        printf("length: ");
        if(scanf("%lf",&length) !=1)
        {
            printf("Error: Please enter correct values\n");
            scanf("%*s");
            continue;
        }
        if(length<=0)
        {
            printf("Error: Zero and negative values are not allowed\n");
            continue;
        }
        break;
    }while(1);

    //GENİŞLİK HESAPLAMA
    do
    {
        printf("width: ");
        if(scanf("%lf",&width) !=1)
        {
            printf("Error: Please enter correct values\n");
            scanf("%*s");
            continue;
        }
        if(width<=0)
        {
            printf("Error: Zero and negative values are not allowed\n");
            continue;
        }
        break;
    }while(1);

    //DERİNLİK HESAPLAMA
    do
    {
        printf("depth: ");
        if(scanf("%lf",&depth) !=1)
        {
            printf("Error: Please enter correct values\n");
            scanf("%*s");
            continue;
        }
        if(depth<=0)
        {
            printf("Error: Zero and negative values are not allowed\n");
            continue;
        }
        break;
    }while(1);

    //METREKÜP HESAPLAMA
    cubicMeter=length*width*depth;

    printf("The pool requires %.2lf cubic meters of water.",cubicMeter);
    return 0;
}
