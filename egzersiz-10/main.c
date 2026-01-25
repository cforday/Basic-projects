    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        float prizmaUzunluk,prizmaGenislik,prizmaYukseklik;
        float tabanAlan,hacim;

        do
        {
            printf("Uzunluk: ");
            if(scanf("%f",&prizmaUzunluk) !=1)
            {
                printf("Hata: Sayi girmediniz!\n");
                scanf("%*s");
                continue;
            }
            if(prizmaUzunluk<0)
            {
                printf("Hata: Negatif sayi giremezsiniz\n");
                continue;
            }
            break;
        }while(1);

        do
        {
            printf("Genislik: ");
            if(scanf("%f",&prizmaGenislik) !=1)
            {
                printf("Hata: Sayi girmediniz\n");
                scanf("%*s");
                continue;
            }
            if(prizmaGenislik<0)
            {
                printf("Hata: negatif sayi giremezsiniz\n");
                continue;
            }
            break;
        }while(1);

        do
        {
            printf("Yukseklik: ");
            if(scanf("%f",&prizmaYukseklik) != 1)
            {
                printf("Hata: Sayi Girmediniz!");
                scanf("%*s");
                continue;
            }
            if(prizmaYukseklik<0)
            {
                printf("Hata: Negatif Sayi Giremezsiniz\n");
                continue;
            }
            break;
        }while(1);

        tabanAlan=prizmaUzunluk*prizmaGenislik;
        hacim=tabanAlan*prizmaYukseklik;

        printf("Prizmanin Taban Alani: %.2f\nPrizmanin Hacmi: %.2f",tabanAlan,hacim);

        return 0;
    }
