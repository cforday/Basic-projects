#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=3,b=5;
    int x=4;
    int hesap;



    printf("F(x)=3x-5 icin x=4\n");
    printf("F(%d) = %d*%d-%d\n",x,a,x,b);
    hesap=a*x-b;
    printf("F(4) = %d",hesap);


    return 0;
}
