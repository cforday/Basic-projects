#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,result;
    char extra;


    do
    {
        printf("hundreds place: ");
        if(scanf("%d%c",&x,&extra)!=2 || extra != '\n')
        {
            printf("Error: Please you enter a number.\n");
            scanf("%*s");
            continue;
        }
        if(x<=0)
        {
            printf("Error: The value you enter cannot zero and negative");
            continue;
        }
        break;
    }while(1);

    do
    {
        printf("tens place: ");
        if(scanf("%d%c",&y,&extra)!=2 || extra !='\n')
        {
            printf("Error: Please you enter a number.\n");
            scanf("%*s");
            continue;
        }
        if(y<=0)
        {
            printf("Error: The value you enter cannot zero and negative.\n");
            continue;
        }
        break;
    }while(1);


        do
        {
            printf("ones place: ");
            if(scanf("%d%c",&z,&extra) !=2 || extra != '\n')
            {
                printf("Error: Please you enter a number.\n");
                scanf("%*s");
                continue;
            }
            if(z<=0)
            {
                printf("Error: The value you enter cannot zero and negative.\n");
                continue;
            }
            break;
        }while(1);

        if(x>INT_MAX/100)
        {
            printf("Overflow at x * 100\n");
            return 1;
        }
        if(y>INT_MAX/10)
        {
            printf("overflow at y*10\n");
            return 1;
        }

        int part1 = x*100;
        int part2 = x*10;

        if(part1>INT_MAX - (part2+z))
        {
            printf("overflow at sum\n");
            return 14;
        }
        result=part1+part2+z;

        printf("%d",result);
    return 0;
}
