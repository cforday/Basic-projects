#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,add=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        add+=i;
    }

    printf("Addition = %d",add);
    return 0;
}
