#include <stdio.h>
#include <stdlib.h>

int main()
{
    int uzunKenar,kisaKenar,alan,cevre;

    printf("Uzun Kenar: ");
    scanf("%d",&uzunKenar);

    printf("Kisa Kenar: ");
    scanf("%d",&kisaKenar);

    alan=uzunKenar*kisaKenar;

    cevre=2*(uzunKenar+kisaKenar);

    printf("Dikdortgen Alan: %d\n",alan);
    printf("Dikdortgen Cevre: %d\n",cevre);


    return 0;
}
