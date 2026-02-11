#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit,i=0,line=0;
    do
    {
        printf("Please Enter a number: ");
        if(scanf("%d",&limit) !=1)
        {
            printf("Error: the value enter cannot a letter");
            scanf("%*s");
            continue;
        }
        if(limit<=0)
        {
            printf("Error: The value enter cannot negative and zero");
            continue;
        }
        break;
    }while(1);

    while(i<=limit)
    {
        if(i%17==0)
        {
            printf("%5d",i);
            line++;
            if(line%10==0)
            {
                printf("\n");
            }

        }
        i++;
    }

    return 0;
}
