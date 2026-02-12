#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hPlace,tPlace,oPlace,number;
    char query;

    do
    {
        printf("Please enter a number: ");
        if(scanf("%d%c",&number,&query) !=2 || query != '\n')
        {
            printf("Error: You cannot enter letter");
            scanf("%*s");
            continue;
        }
        if(number<=0)
        {
            printf("Error: The value you cannot negative and zero");
            continue;
        }
        break;
    }while(1);

    hPlace=number%1000/100;
    tPlace=number%100/10;
    oPlace=number%10;

    printf("Hundreds Place: %d\n",hPlace);
    printf("Tens place: %d\n",tPlace);
    printf("Ones Place: %d",oPlace);


    return 0;
}
