#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempt = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Try to guess it!\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempt++;

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempt);
            break;
        }
    }
    return 0;
}
