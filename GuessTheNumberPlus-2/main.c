#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menuSecenek;

    int hak,sayi,tahmin;
    char devam;
    do
    {
        //ZORLUK SECİM
        printf("1 -> Kolay(1-10)\n");
        printf("2 -> Orta(1-50)\n");
        printf("3 -> Zor(1-100)\n");
        printf("4 -> Exit");

        printf("Zorluk Seciniz: ");
        scanf("%d",&menuSecenek);


        //1-10 KOLAY AYARLAR
        if(menuSecenek==1)
        {
            sayi=4;
            hak=3;
        }

        //1-50 ORTA AYARLAR
         else if(menuSecenek==2)
        {
            sayi=14;
            hak=10;
        }

        //1-100 ZOR AYARLAR
         else if(menuSecenek==3)
        {
            sayi=67;
            hak=30;
        }
        else if(menuSecenek==4)
        {
            break;
        }


        system("cls");
        //SAYI TAHMİN OYUNU
        do
        {
            printf("Bir sayi giriniz: ");
            scanf("%d",&tahmin);
            hak--;
            printf("Tam %d Hakkiniz kaldi\n",hak);

            if(tahmin<sayi)
            {
                printf("Tahmin ettiginiz sayi tahmin edilen sayidan kucuk\n");
            }
            else
            {
                printf("Tahmin ettiginiz sayi tahmin edilen sayidan buyuk\n");
            }

        }while(tahmin!=sayi && hak>0);

        if(tahmin==sayi)
        {
            system("cls");
            printf("Tebrikler Bu oyunuda hakkinizla kazandiniz\n");
        }
        else if(hak==0 && tahmin!=sayi)
        {
            system("cls");
            printf("Kaybettiniz tekrar deneyin\n");
        }


        printf("Devam Etmek istiyor musunuz?(Y/N): ");
        scanf(" %c",&devam);

        if(devam=='Y' || devam=='y')
        {
            continue;
        }
        else
        {
            break;
        }


    }while(menuSecenek!=4);
    printf("Gorusuruz");



    return 0;
}
