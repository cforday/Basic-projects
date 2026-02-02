#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    char query;

    do
    {
        printf("Enter a number: ");
        if(scanf("%d%c",&x,&query) !=2 || query != '\n')
        {
            printf("Error: Please enter a number.\n");
            scanf("%*s");
            continue;
        }
        if(x<=0)
        {
            printf("Error: The value you enter cannot zero and negative.\n");
            continue;
        }

        if(x%2==0)
        {
            printf("The number is even %d\n",x);
        }
        else
        {
            printf("The number you entered is odd. %d\n",x);
        }
    }while(x!=31);
    return 0;
}
