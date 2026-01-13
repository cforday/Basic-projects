#include <stdio.h>
#include <stdlib.h>

int main()
{
    float balance=100,withdrawAmount,depositAmount;
    int pin,correctPin=666,maxAttempts=0,menuChoice;
    char loginCorrect;

    do
    {
        printf("pin: ");
        scanf("%d",&pin);
        maxAttempts++;
    }while(pin!=correctPin &&maxAttempts<3);

    if(pin==correctPin)
    {
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c",&loginCorrect);

        if(loginCorrect=='Y'||loginCorrect=='y')
        {
            system("cls");
            do
            {
                printf("1 > Balance\n");
                printf("2 > Withdraw Cash\n");
                printf("3 > Deposit Cash\n");
                printf("4 > Exit\n");
                printf("Please select an option?: ");
                scanf("%d",&menuChoice);

                if(menuChoice==1)
                {
                    system("cls");
                    printf("Your current balance is %.2f$\n",balance);
                    printf("Do you want to continue? (Y/N): ");
                    scanf(" %c",&loginCorrect);

                    if(loginCorrect=='Y'||loginCorrect=='y')
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                else if(menuChoice==2)
                {
                    system("cls");

                    do
                    {
                        printf("Enter withdrawal amount: ");
                        scanf("%f",&withdrawAmount);

                        printf("Please enter a valid amount.\n");
                    }while(withdrawAmount<=0 || withdrawAmount>balance);

                    balance-=withdrawAmount;

                        printf("Your current balance is %.2f$\n",balance);
                        printf("Do you want to continue? (Y/N): ");
                        scanf(" %c",&loginCorrect);

                        if(loginCorrect=='Y'||loginCorrect=='y')
                        {
                            system("cls");
                            continue;
                        }
                        else
                        {
                            break;
                        }
                }
                else if(menuChoice==3)
                {
                    system("cls");
                    do
                    {
                        printf("How much would you like to deposit into your account?: ");
                        scanf("%f",&depositAmount);

                    }while(depositAmount<=0);

                    balance+=depositAmount;

                        printf("Your current balance is %.2f$\n",balance);
                        printf("Do you want to continue? (Y/N): ");
                        scanf(" %c",&loginCorrect);

                        if(loginCorrect=='Y'||loginCorrect=='y')
                        {
                            system("cls");
                            continue;
                        }
                        else
                        {
                            break;
                        }

                }


            }while(menuChoice!=4);
        }
        else
        {
            printf("GoodBye");
            return 0;
        }
    }
    else
    {
        printf("Too many incorrect attempts. Card Blocked");
    }

    return 0;
}
