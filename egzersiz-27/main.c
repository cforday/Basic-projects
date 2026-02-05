#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,result=0;
    char query;

    do
    {
        printf("Please Enter a number: ");
        if(scanf("%d%c",&x,&query) !=2 || query != '\n')
        {
            printf("Error: You entered invalid input.\n");
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

    for(int i=1;i<=x;i++)
    {
        result+=i;
    }
    printf("%d",result);




    return 0;
}
