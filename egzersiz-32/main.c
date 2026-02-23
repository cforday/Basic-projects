#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sMeter,price,calc;
    char query,choice;

     do
    {
        printf("Please Enter the in meters: ");
        if(scanf("%f%c",&sMeter,&query) !=2 || query != '\n')
        {
            printf("Error: You didn't enter number!\n");
            scanf("%*s");
            continue;
        }
        if(sMeter<=0)
        {
            printf("Error: You can't enter zero and negative\n");
            continue;
        }
        break;
    }while(1);



        printf("T --- Name: Twetty    --- Price: 18\n");
        printf("B --- Name: Bugs      --- Price: 17\n");
        printf("S --- Name: Spiderman --- Price: 19\n");


        do
        {
            printf("Please choose a character:  ");
            scanf(" %c",&choice);
            if(choice != 'T' && choice != 'B' && choice!='S')
            {
                printf("Error: please enter correct value\n");
                continue;
            }
            break;
        }while(1);


    switch(choice)
    {
    case 'T':
        {
            price=18;

            calc=sMeter*price;
        }
        break;
    case 'B':
        {
            price=17;

            calc=sMeter*price;
        }
        break;
    case 'S':
        {
            price=19;

            calc=sMeter*price;
        }
        break;

    default:
        {
            printf("...");
        }

    }


    printf("Price: %.2f",calc);


    return 0;
}
