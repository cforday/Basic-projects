#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int a,b,temporary;

    //A DEGERLERİ İÇİN KULLANICIDAN İSTENİLEN BİLGİLERİ SORGULAMA
    do
    {
        printf("A: ");
        if(scanf("%d",&a) !=1)
        {
            printf("The value you entered is incorrect.\n");
            scanf("%*s");
            continue;
        }
        if(a<=0)
        {
            printf("The value you cannot entered negative and zero\n");
            continue;
        }
        break;
    }while(1);

    //B DEĞERİ İÇİN KULLANICDAN ALINAN DEĞERİ SORGULAMA
    do
    {
        printf("B: ");
        if(scanf("%d",&b) !=1)
        {
            printf("The value you entered is incorrect.\n");
            scanf("%*s");
            continue;
        }
        if(b<=0)
        {
            printf("The value you cannot entered negative and zero\n");
            continue;
        }
        break;
    }while(1);


    //İŞLEMİN ORJİNAL VE DEĞİŞMEDEN ÖNCEKİ HALİ
    system("CLS");
    printf("The original order of the numbers\n");
    printf("A: %d\nB: %d\n",a,b);

    //DEĞİŞTİRME İŞLEMİ
    temporary=a;
    a=b;
    b=temporary;

    //DEĞİŞTİKTEN SONRAKİ EKRANA YAZIMI
    printf("after the numbers are swapped\n");
    printf("A: %d\nB: %d",a,b);

    return 0;
}
