#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, userGuess, numberOfGuesses = 0;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    randomNumber = rand() % 100 + 1;
    // randomNumber = 20; // Manually set the number
    printf("The random number is %d\n", randomNumber);

    printf("Guess the number between 1 and 100:\n");

    // Loop until the user guesses the correct number
    do {
        // Get the user's guess
        printf("Enter your guess: ");
        scanf("%d", &userGuess);
        numberOfGuesses++;

        // Check if the guess is correct
        if (userGuess > randomNumber) {
            printf("Too high! Try again.\n");
        } else if (userGuess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", numberOfGuesses);
        }
    } while (userGuess != randomNumber);

    return 0;
}
