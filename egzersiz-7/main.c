#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;

    printf("Lutfen Fahrenheit Giriniz: ");
    scanf("%f",&f);

    c=(f-32)*(float)5/9;

    printf("Santigrat / Celsius: %f",c);
    return 0;
}
