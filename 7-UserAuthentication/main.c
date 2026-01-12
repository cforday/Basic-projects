#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userNameData=987,userPasswordData=789;
    int userName,userPassword;
    int count=0;

    do
    {
        printf("username: ");
        scanf("%d",&userName);

        printf("password: ");
        scanf("%d",&userPassword);
        count++;
    }while((userName!=userNameData||userPassword!=userPasswordData) && count<3);

    if(userName==userNameData&&userPassword==userPasswordData)
    {
        printf("Login successful\n");
    }
    else
    {
        printf("Account locked. Too many attempts\n");
    }
    return 0;
}
