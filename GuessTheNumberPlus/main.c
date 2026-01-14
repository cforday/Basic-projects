#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secenek,sayi,sayac=0,tahmin;


    do
    {
      printf("1 -> Kolay(1-10)\n");
      printf("2 -> Orta(1-50)\n");
      printf("3 -> Zor (1-100\n");
      printf("4 -> Cikis\n");

      printf("Zorluk Seciniz: ");
      scanf("%d",&secenek);

      //Kolay 1-10 Görev
      if(secenek==1)
      {
          system("cls");
          sayi=3;
          sayac=0;

          do
          {
              printf("Tahmin edeceginiz sayi(1-10): ");
              scanf("%d",&tahmin);
              sayac++;
              printf("3 Hakkinizin %d tanesini kullandiniz\n",sayac);

              if(tahmin<sayi)
              {
                  printf("Tahmin Ettiginiz sayi kucuk\n");
              }
              else
              {
                  printf("Tahmin Ettiginiz sayi buyuk\n");
              }
          }while(tahmin!=sayi && sayac<3);
      }
      if(secenek==2)
      {
          system("cls");
          sayi=27;
          sayac=0;

          do
          {
              printf("Tahmin edeceginiz sayi(1-50)");
              scanf("%d",&tahmin);
              sayac++;
              printf("10 Hakkinizin %d tanesini kullandiniz\n",sayac);

              if(tahmin<sayi)
              {
                  printf("Tahmin Ettiginiz sayi kucuk\n");
              }
              else
              {
                  printf("Tahmin Ettiginiz sayi buyuk\n");
              }
          }while(tahmin!=sayi && sayac<10);
      }
      if(secenek==3)
      {
          system("cls");
          sayi=65;
          sayac=0;

          do
          {
              printf("Tahmin edeceginiz sayi(1-100)");
              scanf("%d",&tahmin);
              sayac++;
              printf("30 Hakkinizin %d tanesini kullandiniz\n",sayac);

              if(tahmin<sayi)
              {
                  printf("Tahmin Ettiginiz sayi kucuk\n");
              }
              else
              {
                  printf("Tahmin Ettiginiz sayi buyuk\n");
              }
          }while(tahmin!=sayi && sayac<30);
      }

    }while(secenek!=4);
    return 0;
}
