#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guessed_num;
    int no_of_guesses = 0;

    srand(time(0));

    num = rand() % 1000 + 1;

    do {
        printf("Guess the number: ");
        scanf("%d", &guessed_num);

        if (guessed_num > num)
        {
            printf("Lower number please\n");
        }
        else if (guessed_num < num)
        {
            printf("Higher number please\n");
        }
        no_of_guesses++;
    }
    while (guessed_num != num);

    printf("CONGRATULATIONS! You guessed the number and the number of guesses you needed was %d", no_of_guesses);

    return 0;
}