#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    char answer[20];
    clock_t start, end;
    double reactionTime;
    int score;
    int choice;
    int round;
    int totalScore = 0;

    printf("===== RHYMING WORD GAME =====\n");

    for (round = 1; round <= 5; round++)
    {
        printf("\n===== ROUND %d =====\n", round);

        printf("Choose a word:\n");
        printf("1. CAT\n");
        printf("2. DOG\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nWord: CAT\n");
            printf("Type a rhyming word: ");

            start = clock();
            scanf("%s", answer);
            end = clock();

            reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

            if (strcmp(answer, "hat") == 0 ||
                strcmp(answer, "rat") == 0 ||
                strcmp(answer, "fat") == 0 ||
                strcmp(answer, "mat") == 0 ||
                strcmp(answer, "bat") == 0)
            {
                if (reactionTime < 5.0)
                    score = 100;
                else
                    score = 50;

                printf("Correct!\n");
            }
            else
            {
                score = 0;
                printf("Wrong answer!\n");
            }
        }

        else if (choice == 2)
        {
            printf("\nWord: DOG\n");
            printf("Type a rhyming word: ");

            start = clock();
            scanf("%s", answer);
            end = clock();

            reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

            if (strcmp(answer, "log") == 0 ||
                strcmp(answer, "fog") == 0 ||
                strcmp(answer, "frog") == 0)
            {
                if (reactionTime < 5.0)
                    score = 100;
                else
                    score = 50;

                printf("Correct!\n");
            }
            else
            {
                score = 0;
                printf("Wrong answer!\n");
            }
        }

        else
        {
            score = 0;
            reactionTime = 0;
            printf("Invalid choice!\n");
        }

        printf("Reaction Time = %.2f seconds\n", reactionTime);
        printf("Round Score = %d\n", score);

        totalScore = totalScore + score;
    }

    printf("\n===== GAME OVER =====\n");
    printf("Total Score = %d / 500\n", totalScore);

    return 0;
}
