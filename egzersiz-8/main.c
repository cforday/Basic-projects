#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=3;
    int b=-9;
    float x;

    printf("Denkleminiz: %dx + %d = 0\n",a,b);

    x=-(float)b/a;

    printf("x = %.2f",x);

    return 0;
}
