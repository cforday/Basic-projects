#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,birler,onlar;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);

    birler=sayi%10;
    onlar=sayi%100/10;

    printf("birler basamagi %d\n",birler);
    printf("Onlar basamagi %d",onlar);
    return 0;
}
