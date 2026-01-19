#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menusecim,islem;
    int sayi1,sayi2;
    char sorgu;

    do
    {
        system("cls");
        //1 VE 2. SAYIYI ALMA ALANI
        printf("==== K U L L A N I C I - A R A Y U Z U ====\n\n");
        printf("1. Sayi: ");
        scanf("%d",&sayi1);
        printf("2.Sayi: ");
        scanf("%d",&sayi2);

        //TOPLAMA CİKARMA BOLME CARPMA SORMA ALANI
        printf("\n\n==== H E S A P -  M A K I N E S I ====\n\n");

        printf("1 -> Toplama\n");
        printf("2 -> Cikarma\n");
        printf("3 -> Bolme\n");
        printf("4 -> Carpma\n");
        printf("5 -> Exit\n");

        printf("Yapmak istediginiz islemi seciniz: ");
        scanf("%d",&menusecim);

        switch(menusecim)
        {
        case 1:islem=sayi1+sayi2;
        break;
        case 2:islem=sayi1-sayi2;
        break;
        case 3:islem=sayi1/sayi2;
        break;
        case 4:islem=sayi1*sayi2;
        break;
        case 5:printf("GoodBye");
        break;

        default:printf("islem hesaplanamadi");
            break;
        }
        printf("\n\nYaptiginiz islemin sonucu: %d\n\n",islem);
        printf("Isleme devam etmek istiyor musunuz? (Y/N): ");
        scanf(" %c",&sorgu);
        if(sorgu=='Y'||sorgu=='y')
        {
            continue;
        }
        else
        {
            break;
        }

    }
    while(menusecim!=5);


    return 0;
}
