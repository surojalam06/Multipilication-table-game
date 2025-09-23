#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, num1, num2, answer, userAnswer, score = 0;
    char playAgain;

    // Seed the random number generator
    srand(time(0));

    do {
        // for user enter input table
    	printf("\nEnter your table own choice : ");
        scanf("%d",&n);

        // Generate two random numbers between 1 and 10
        num1 = rand() % n + 1;
        num2 = rand() % n + 1;

        // Calculate the correct answerA
        answer = num1 * num2;

        // Ask the user for their answer
        printf("What is %d x %d? \n= ", num1, num2);
        scanf("%d", &userAnswer);

        // Check if the user's answer is correct
        if (userAnswer == answer) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect!\nThe correct answer is = %d\n", answer);
        }

        // Ask if the user wants to play again
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    // Display the final score
    printf("Your final score is: %d\n", score);
    printf("The next score will be better han the current score!\nGo try to better score..");

    return 0;
}