#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayim;

    printf("Sayi giriniz: ");
    scanf("%d",&sayim);

    if(sayim>0)
    {
        if(sayim%2==0)
        {
            printf("cift\n");
        }
        else
        {
            printf("tek\n");
        }
        printf("pozitive");
    }
    else if(sayim==0)
    {
        printf("notr");
    }
    else
    {
        if(sayim%2==0)
        {
            printf("cift");
        }
        else
        {
            printf("tek");
        }
        printf("negative");
    }

    return 0;
}
