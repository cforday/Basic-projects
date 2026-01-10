#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age,adult;

    printf("Plase enter a age: ");
    scanf("%d",&age);

    if(age>=18)
    {
        adult=1;
    }
    else
    {
        adult=0;
    }

    if(adult==1)
    {
        printf("adult");
    }
    else
    {
        printf("Underage");
    }
}
