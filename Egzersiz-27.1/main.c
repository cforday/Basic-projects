#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,result=0,i=0;
    char query;

    do
    {
        printf("Please enter a number: ");
        if(scanf("%d%c",&x,&query) !=2 || query != '\n')
        {
            printf("Error: You enter value invalid input.\n");
            scanf("%*s");
            continue;
        }
        if(x<=0)
        {
            printf("Error: The value you cannot zero and negative.\n");
            continue;
        }
        break;
    }while(1);

    while(i<=x)
    {
        if(i == x)
        {
            printf("%d",i);
        }
        else
        {
            printf("%d + ",i);

        }
        result+=i;
         i++;
    }
    printf(" = %d",result);

    return 0;
}
