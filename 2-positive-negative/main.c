#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,isEven,sign;

    printf("Please enter a number: ");
    scanf("%d",&number);

    if(number%2==0)
    {
        isEven=1;
    }
    else
    {
        isEven=0;
    }

    if(number>0)
    {
        sign=1;
    }
    else if(number==0)
    {
        sign=0;
    }
    else
    {
        sign=-1;
    }

    if(sign==0)
    {
        printf("notr");
    }
    else
    {
        if(sign==1)
        {
            printf("positive ");
        }
        else
        {
            printf("negative ");
        }
        if(isEven==1)
        {
            printf("and even");
        }
        else
        {
            printf("and odd");
        }
    }
    return 0;
}
