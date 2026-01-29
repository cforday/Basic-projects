#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int a,b,c,x;
    printf("ax^2 + b^x + c = ?\n");
    printf("Solve the mathematical operation above.\n\n\n");

    do
    {
        printf("a: ");
    if(scanf("%d",&a) !=1)
    {
        printf("Error: Please enter a valid value\n");
        scanf("%*s");
        continue;
    }
    else if(a<=0)
    {
        printf("Error: You cannot enter 0 or a negative number\n");
        continue;

    }
    else if(a!=0 && a>INT_MAX/a)
    {
        printf("Error: An error will occur due to overflow\n");
        continue;
    }
    break;
    }while(1);

   do
   {
       printf("b: ");
       if(scanf("%d",&b) !=1)
       {
           printf("Error: Please enter a valid value");
           scanf("%*s");
           continue;
       }
       else if(b<=0)
       {
           printf("Error: You cannot enter 0 or negative number");
           continue;
       }
       else if(b!=0 && b>INT_MAX/b)
       {
           printf("Error: An error will occur due to overflow");
           continue;
       }
       break;
   }while(1);

   do
   {
       printf("c: ");
       if(scanf("%d",&c) !=1)
       {
           printf("Error: Please enter a valid value");
           scanf("%*s");
           continue;
       }
       else if(c<=0)
       {
           printf("Error: You cannot enter 0 or negative number");
           continue;
       }
       else if(c!=0 && c>INT_MAX/c)
       {
           printf("Error: An error will occur due to overflow");
           continue;
       }
       break;
   }while(1);


   do
   {
       printf("x: ");
       if(scanf("%d",&x)!=1)
       {
           printf("Error: Please enter a valid value");
           scanf("%*s");
           continue;
       }
       else if(x<=0)
       {
           printf("Error: You cannot enter 0 or negative number");
           continue;
       }
       else if(b!=0 && x>INT_MAX/x)
       {
           printf("Error: An error will occur due to overflow");
           continue;
       }
       break;
   }while(1);

   printf("ax^2 + b^x + c = ?\n");
   calc=(a*x*x) + (b*x) + c;


   printf("x = %d",calc);





    return 0;
}
