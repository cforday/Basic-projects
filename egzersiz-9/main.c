#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2;
    int b=7;
    float x;

    printf("%dx + %d = 0\n",a,b);

    x=-(float)b/a;

    printf("x = %.2f",x);

    return 0;
}
