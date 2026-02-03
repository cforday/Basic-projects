#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    char query;

    do
    {
        printf("A: ");
        if(scanf("%d%c",&a,&query) !=2 || query !='\n')
        {
            printf("Error: You enter cannot value.\n");
            scanf("%*s");
            continue;
        }
        if(a<=0)
        {
            printf("Error: The value you enter cannot negative and zero.\n");
            continue;
        }
        break;
    }while(1);

    do
    {
        printf("B: ");
        if(scanf("%d%c",&b,&query) !=2 || query != '\n' )
        {
            printf("Error: You enter cannot value.\n");
            scanf("%*s");
            continue;
        }
        if(b<=0)
        {
            printf("Error: The value you enter cannot negative and zero.\n");
            continue;
        }
        break;
    }while(1);

    do
    {
        printf("C: ");
        if(scanf("%d%c",&c,&query) !=2 || query != '\n')
        {
            printf("Error: You enter cannot value.\n");
            scanf("%*s");
            continue;
        }
        if(c<=0)
        {
            printf("Error: The value you enter cannot negative and zero.\n");
            continue;
        }
        break;
    }while(1);

    if(a>b && a>c)
    {
        printf("Your largest number is A\n");
    }
    else if(b>a && b>c)
    {
        printf("Your largest number is B\n");
    }
    else if(c>a && c>b)
    {
        printf("Your largest number is C\n");
    }
    else
    {
        printf("All number are equal.\n");
    }

    return 0;
}
