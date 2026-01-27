#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{

    int kenar,alan;

    printf("Kenar Giriniz: ");
    if(scanf("%d",&kenar)!=1)
    {
            printf("Hata: Lutfen sadece sayi giriniz!.\n");
    }
    else if(kenar<0)
    {
        printf("Hata: Negatif değer girilmez!\n");
    }
    else if(kenar!=0 && kenar>INT_MAX/kenar)
    {
        printf("Hata: Tasma olur ve alan hesaplanamaz.\n");
    }
    else
    {
        alan=kenar*kenar;

        printf("Alan hesabiniz: %d",alan);

    }
    return 0;
}
