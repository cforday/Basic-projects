#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,result;
    char query;

    do
    {
        printf("Please You enter a number: ");
        if(scanf("%d%c",&x,&query) !=2 || query != '\n')
        {
            printf("Error: The value you enter invalid input.\n");
            scanf("%*s");
            continue;
        }
        if(x==0)
        {
            printf("Error: You value enter cannot zero\n");
            continue;
        }
        break;
    }while(1);

    for(int i=0;i<=10;i++)
    {
        result=x*i;
        printf("%d * %d = %d\n",x,i,result);
    }
    return 0;
}
