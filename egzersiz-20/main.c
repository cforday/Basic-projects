#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,result;

    do
    {
        printf("Enter the first number: ");
        if(scanf("%f",&n1) !=1)
        {
            printf("Error: The value you enter incorrect.\n");
            scanf("%*s");
            continue;
        }
        if(n1<=0)
        {
            printf("Error: The value you cannot enter negative and zero.\n");
            continue;
        }
        break;
    }while(1);

    do
    {
        printf("Enter the second number: ");
        if(scanf("%f",&n2) !=1)
        {
            printf("Error: The value you enter incorrect.\n");
            scanf("%*s");
            continue;
        }
        if(n2<=0)
        {
            printf("Error: The value you cannot enter negative and zero.\n");
            continue;
        }
        break;
    }while(1);

    do
    {
        printf("Enter the third number: ");
        if(scanf("%f",&n3) !=1)
        {
            printf("Error: The value you enter incorrect.\n");
            scanf("%*s");
            continue;
        }
        if(n3<=0)
        {
            printf("Error: The value you cannot enter negative and zero.\n");
        }
        break;
    }while(1);

    result=(n1+n2+n3)/3;

    printf("Result: %.2f",result);




    return 0;
}
