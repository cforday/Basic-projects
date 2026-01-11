#include <stdio.h>
#include <stdlib.h>

int main()
{
    int guess=6,userGuess;
    do
    {
        printf("Can you guess a number?: ");
        scanf("%d",&userGuess);
    }while(guess!=userGuess);

    printf("Congratulations! You guessed correctly!");
    return 0;
}
