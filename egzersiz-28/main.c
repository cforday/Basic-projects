#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int x,y,result;
    char query;

    do
    {
        printf("Please Enter First number: ");
        if(scanf("%d%c",&x,&query) !=2 || query != '\n')
        {
            printf("Error: You enter a value invalid input.\n");
            scanf("%*s");
            continue;
        }
        break;
    }while(1);

    do
    {
        printf("Please Enter Second number: ");
        if(scanf("%d%c",&y,&query) !=2 || query != '\n')
        {
            printf("Error: You enter a value invalid input.\n");
            scanf("%*s");
            continue;
        }
        break;
    }while(1);

    if(x>0 && y>0)
    {
        if(x> INT_MAX / y)
        {
            printf("Overflow detected\n");
            return 1;
        }

    }
    else if(x < 0 && y < 0)
    {
        if(x < INT_MAX / y)
        {
            printf("Overflow detected\n");
            return 1;
        }
    }

    else if(x>0 && y)
    {
        if(y< INT_MIN /x)
        {
            printf("Overflow detected\n");
            return 1;
        }
    }

    else if (x < 0 && y > 0)
        {
            if (x < INT_MIN / y)
            {
            printf("Overflow detected\n");
            return 1;
            }
        }





    //SONUÇ EKRANI
    result=x*y;


    //POZİTİF Mİ - NEGATİF Mİ SORGULAMA
    if(result>0)
    {
        printf("Positive");
    }
    else if(result==0)
    {
        printf("notr");
    }
    else
    {
        printf("Negative");
    }


    return 0;
}
