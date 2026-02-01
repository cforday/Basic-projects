#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distance,speed;
    float time;
    char startingCity[15],destinationCity[15];

    printf("Which city are you in right now?: ");
    scanf("%s",startingCity);

    printf("Which city are you going to?: ");
    scanf("%s",destinationCity);

    //Kullanicidan istenilen iki şehir arasındaki km farkını sorgulama
    do
    {
        printf("How many kilometers are there between the two cities?: ");
        if(scanf("%d",&distance) !=1)
        {
            printf("Error: The value you entered incorrect\n");
            scanf("%*s");
            continue;
        }
        if(distance<=0)
        {
            printf("Error: The value you cannot entered negative and zero.\n");
            continue;
        }
        break;
    }while(1);

    //Kullanicidan istenilen kac km hiz sorgusunu sorgulama
    do
    {
        printf("At what speed (km/h) will you travel?: ");
        if(scanf("%d",&speed) !=1)
        {
            printf("Error: The value you entered incorrect\n");
            scanf("%*s");
            continue;
        }
        if(speed<=0)
        {
            printf("Error: The value you cannot entered negative and zero\n");
            continue;
        }
        break;
    }while(1);

    time = (float)distance/speed;

    //Sonuçları ekrana yazdırma
    printf("Starting City: %s\n",startingCity);
    printf("Destination City: %s\n",destinationCity);
    printf("Distance between the two cities (km): %d\n",distance);
    printf("According to my calculation. You'll be there in %.2f hours",time);



    return 0;
}
