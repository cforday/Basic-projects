#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    do
    {
        printf("Please enter a number: ");
        if(scanf("%d",&x) !=1)
        {
            printf("Error: You can't enter letters");
            scanf("%*s");
            continue;
        }
        if(x<=0)
        {
            printf("Error: You doesn't zero and negative!");
            continue;
        }
        break;
    }while(1);

    for(int i=1;i<=x;i++)
    {
        if((i%13==0)&&(i%17==0))
        {
            printf("%d ",i);
        }
        else if(i%13==0)
        {
            printf("%d ",i);
        }
        else if(i%17==0)
        {
            printf("%d ",i);
        }



    }

    /* printf("=====================================================\n");

    for(int j=0;j<=x;j++)
    {
        if(j%17==0)
        {
           printf("%d\n",j);
        }
    }

    */

    return 0;
}
