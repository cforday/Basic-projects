#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    char query;
    do
    {
        printf("Please enter a number: ");
        if(scanf("%d%c",&x,&query) !=2 || query != '\n' )
        {
            printf("Error: The value you enter invalid input.\n");
            scanf("%*s");
            continue;
        }
        if(x<=0)
        {
            printf("Error: The value you cannot enter zero and negative.\n");
            continue;
        }
        break;
    }while(1);

    while(x>0)
    {
        x--;
        printf("%d\n",x);

    }

    return 0;
}
