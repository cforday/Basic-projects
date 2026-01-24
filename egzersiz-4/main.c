#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1,a2,bolum,kalan;

    printf("2 Sayi giriniz: ");
    scanf("%d %d",&a1,&a2);

    bolum=a1/a2;
    kalan=a1%a2;

    printf("Bolum: %d\nKalan: %d",bolum,kalan);
    return 0;
}
