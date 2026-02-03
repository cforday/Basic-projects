#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char query;


    do
    {
        printf(" First number: ");
        if(scanf("%d%c",&a,&query) !=2 || query != '\n')
        {
            printf("Error: You have not entered correct data.\n");
            scanf("%*s");
            continue;
        }
        break;
    }while(1);

    do
    {
        printf("Second Number: ");
        if(scanf("%d%c",&b,&query) !=2 || query != '\n')
        {
            printf("Error: You have not entered correct data.\n");
            scanf("%*s");
            continue;
        }
        break;
    }while(1);


    if(a==b)
    {
        printf("Numbers A and B are equal.\n");
    }
    else
    {
        if(a!=b)
        {
            printf("A and B are not equal.\n");
        }
        if(a>b)
        {
            printf("Number A is greater than number B.\n");
        }
        if(a<b)
        {
            printf("Number B is greater than number A.\n");
        }
    }
    return 0;
}
