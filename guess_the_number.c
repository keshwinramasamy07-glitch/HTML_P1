#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int random_num, hardness, y = 1, your_guess, i;

    printf("\nWelcome to Number guessing Game:\n");
    printf("Hardness level :\n");
    printf("Easy (1-10) : 1,\nMedium (1-100) : 2,\nHard (1-1000) : 3.\n");

    while (y == 1) {
        printf("\nEnter your Hardness level: ");
        scanf("%d", &hardness);

        if (hardness == 1) {
            random_num = 1 + rand() % 10;
        } else if (hardness == 2) {
            random_num = 1 + rand() % 100;
        } else if (hardness == 3) {
            random_num = 1 + rand() % 1000;
        } else {
            printf("\nInvalid Hardness level !!!\n");
            printf("Want to continue the game?\n");
            printf("If yes enter 1, If not enter 0: ");
            scanf("%d", &y);
            continue;
        }

        i = 0;
        while (1) { 
            i++;
            printf("\nEnter your guess no: ");
            scanf("%d", &your_guess);

            if (your_guess == random_num) {
                printf("\nHey Great you did it!");
                printf("\nNumber of attempts is %d", i);
                printf("\nScore : %d\n", i * 10);
                break;
            } else {
                if (your_guess > random_num) {
                    printf("Your guess is higher\n");
                } else {
                    printf("Your guess is lower\n");
                }
                printf("Come on try it again\n");
            }
        }

        printf("\nWant to continue the game?\n");
        printf("If yes enter 1, If not enter 0: ");
        scanf("%d", &y);
    }

    printf("\nWe hope you enjoyed it. Thanks for using us!\n");
    return 0;
}