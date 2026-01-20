#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    //SİSTEMDE KAYITLI OLAN KULLANICI ADI VE DENEME HAKKI SIFIRLAMA
    int kayitliAd=333,kayitliSifre=333,deneme=3;
    //KULLANICIDAN İSTENİLEN DEGERLER
    int kAd,kSifre,yetki,yetkiseviyesi,menuSecenek;
    float sayi,sayi2;
    //GİRİS CHECKLEME
    bool girisDogrulama=false;
    //ASCII DOGRULAMA
    char ASCII;

    {

        //KULLANICI ADI
        printf("Kullanici Adi: ");
        scanf("%d",&kAd);

        //SIFRE
        printf("Sifre: ");
        scanf("%d",&kSifre);



        //GİRİŞ BAŞARILIYSA
        if(kAd==kayitliAd&&kSifre==kayitliSifre)
        {
            system("CLS");
            printf("Giris Basarili\n\n\n");

            do
            {
                printf("1 - > Standart Kullanici\n");
                printf("2 - > Yetkili Kullanici\n");
                printf("3 - > Admin\n");
                printf("Yetkiniz: ");
                scanf(" %d",&yetki);

            if(yetki==1)
            {
                yetkiseviyesi=1;
            }
            else if(yetki==2)
            {
                yetkiseviyesi=2;
            }
            else if(yetki==3)
            {
                yetkiseviyesi=3;
            }
            else
            {
                printf("Lutfen yetkiyi 1-3 arasindan bir sayi giriniz\n");
            }
            }while(yetki!=1 && yetki!=2 && yetki!=3);

            do
            {
                printf("1 - > ASCII\n");
                printf("2 - > Matematik Modulu\n");
                printf("3 - > Kullanici Bilgileri\n");
                printf("4 - > Sistem Ayarlari\n");
                printf("5 - > Cikis\n");

                printf("Menu Seciniz: ");
                scanf("%d",&menuSecenek);

                switch(menuSecenek)
                {
                case 1:
                    printf("Bir karakter giriniz: ");
                    scanf(" %c",&ASCII);

                    printf("Degeriniz %d\n",(int)ASCII);

                    if((int)ASCII>=48 && (int)ASCII<=58)
                    {
                        printf("Rakam\n");
                    }
                    else if(((int)ASCII>=65 && (int)ASCII<=90))
                    {
                        printf("Buyuk Harf\n");
                    }
                    else if((int)ASCII>=97 && (int)ASCII<=122)
                    {
                        printf("Kucuk Harf\n");
                    }
                    else
                    {
                        printf("Ozel Karakter\n");
                    }


                    break;
                case 2:
                    if(yetkiseviyesi>=2)
                    {
                        system("cls");
                        printf("1 - ) Kok Sayi Hesaplama\n");
                        printf("2 - ) Ust Sayi hesaplama\n");

                        printf("Hangisini secmek istersiniz: ");
                        scanf("%d",&menuSecenek);

                        switch(menuSecenek)
                        {
                        case 1:
                            system("cls");
                            printf("Bir sayi giriniz: ");
                            scanf("%f",&sayi);

                            printf("Girdiginiz sayinin koku %f\n",sqrt(sayi));
                            break;

                        case 2:
                            system("cls");
                            printf("Bir sayi giriniz: ");
                            scanf("%f",&sayi);

                            printf("Girdiginiz sayinin ustunu giriniz: ");
                            scanf("%f",&sayi2);

                            printf("Girdiginiz sayinin koku %.2f\n",pow(sayi,sayi2));
                            break;

                        default:
                            printf("Yanlis deger girdiniz");
                            break;
                        }
                    }
                    else
                    {
                        printf("Yetkiniz yok\n");
                    }
                    break;
                case 3:
                    printf("Kullanici Adiniz: %d\n",kAd);
                    printf("Sifreniz: %d\n",kSifre);
                    break;

                case 4:
                    if(yetkiseviyesi==3)
                    {
                        system("cls");
                        printf("1-) Yetki Seviyesi degistirme\n");
                        printf("3-) Ana Menuye Don\n");

                        printf("Hangisini Secmek istersiniz: ");
                        scanf("%d",&menuSecenek);

                        switch(menuSecenek)
                        {
                        case 1:
                            system("cls");
                            printf("1 - > Standart Kullanici\n");
                            printf("2 - > Yetkili Kullanici\n");
                            printf("3 - > Admin\n");
                            printf("Yetkiniz: ");
                            scanf(" %d",&yetki);
                            do
                            {
                            if(yetki==1)
                            {
                                yetkiseviyesi=1;
                            }
                            else if(yetki==2)
                            {
                                yetkiseviyesi=2;
                            }
                            else if(yetki==3)
                            {
                                yetkiseviyesi=3;
                            }
                            else
                            {
                                printf("Lutfen yetkiyi 1-3 arasindan bir sayi giriniz\n");
                            }
                            }while(yetki!=1 && yetki!=2 && yetki!=3);
                            break;

                        case 2:
                            printf("Ana Menuye Donuluyor\n");
                            break;

                        }
                    }
                    else
                    {
                        printf("Yetkiniz yeterli degil\n");
                    }
                    break;
                case 5:
                    printf("Gorusuruz");
                    break;

                    default:printf("Yanlis Deger girdiniz\n");
                    break;

                }





            }while(menuSecenek!=5);





            girisDogrulama=true;
        }


        //GİRİŞ BAŞARIZSA
        else
        {
            deneme--;
            printf("Deneme Hakkiniz %d kaldi\n",deneme);
        }


    }while(!girisDogrulama && deneme > 0);


    return 0;
}
