#include <stdio.h>
#include <stdlib.h>

int main()
{
    int add,sub,multi,option;
    float div,mod;
    char choice;
    int num1,num2;
    float num3,num4;


    do
    {
        system("cls");
        printf("Calculator\n");
        printf("1 - addition\n");
        printf("2 - subtract\n");
        printf("3 - Multiply\n");
        printf("4 - Division\n");
        printf("5 - Modulo\n");
        printf("6 - Exit\n\n");
        printf("Select one => ");
        scanf("%d",&option);
        if(option==1)
    {
        printf("======== ADDITION ========\n\n");


        printf("Enter the first number: ");
        scanf("%d",&num1);

        printf("Enter the second number: ");
        scanf("%d",&num2);

        add=num1+num2;

        printf("%d + %d = %d\n\n",num1,num2,add);

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice);

        if(choice=='Y' || choice=='y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    else if(option==2)
    {
        printf("======== SUBTRACTION ========\n\n");

         printf("Enter the first number: ");
        scanf("%d",&num1);

        printf("Enter the second number: ");
        scanf("%d",&num2);

        sub=num1-num2;

        printf("%d - %d = %d\n\n",num1,num2,sub);

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice);

        if(choice=='Y' || choice=='y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
     else if(option==3)
    {
         printf("======== MULTIPLICATION ========\n\n");

        printf("Enter the first number: ");
        scanf("%d",&num1);

        printf("Enter the second number: ");
        scanf("%d",&num2);

        sub=num1*num2;

        printf("%d * %d = %d\n\n",num1,num2,sub);

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice);

        if(choice=='Y' || choice=='y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
     else if(option==4)
    {
        printf("======== DIVISION ========\n\n");

         printf("Enter the first number: ");
        scanf("%f",&num3);

        printf("Enter the second number: ");
        scanf("%f",&num4);

        div=num3/num4;

        printf("%.0f / %.0f = %.2f\n\n",num3,num4,div);

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice);

        if(choice=='Y' || choice=='y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
     else if(option==5)
    {
        printf("======== MODULO ========\n\n");

        printf("Enter the first number: ");
        scanf("%f",&num3);

        printf("Enter the second number: ");
        scanf("%f",&num4);

        mod=num3/num4;

        printf("%.0f / %.0f = %.0f\n\n",num3,num4,mod);

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice);

        if(choice=='Y' || choice=='y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    else
    {
        printf("Goodbye");
    }
    }while(option!=6);


    return 0;
}
