#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,line=0;

    do
    {
        printf("Please enter a number: ");
        if(scanf("%d",&number) !=1)
        {
            printf("Error: You cannot enter letter");
            scanf("%*s");
            continue;
        }
        if(number<=0)
        {
            printf("Error: You cannot enter number zero and negative ");
            continue;
        }
        break;
    }while(1);

    for(int i=0;i<=number;i++)
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
    }
    return 0;
}
