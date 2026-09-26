#include<stdio.h>
#include<string.h>
#include<time.h>

int main()

{
    char answer[20];
    int choice, score;
    clock_t start, end;
    double reactionTime;

    printf("===== LETTER SWAP GAME =====\n\n");

    printf("Choose a word:\n");
    printf("1. CAT\n");
    printf("2. DOG\n");
    printf("3. BAT\n");
    printf("4. TOP\n");
    printf("5. RAM\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\nCAT -> ");
        start = clock();
        scanf("%s", answer);
        end = clock();

        reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

        if (strcmp(answer, "ACT") == 0)
        {
            if (reactionTime < 5.0)
                score = 100;
            else
                score = 50;

            printf("Correct!\n");
            printf("Reaction Time = %.2f seconds\n", reactionTime);
            printf("Score = %d\n", score);
        }
        else
        {
            if (reactionTime < 5.0)
                score = 20;
            else
                score = 0;

            printf("Wrong answer!\n");
            printf("Score = %d\n", score);
        }
    }

    else if (choice == 2)
    {
        printf("\nDOG -> ");
        start = clock();
        scanf("%s", answer);
        end = clock();

        reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

        if (strcmp(answer, "GOD") == 0)
        {
            if (reactionTime < 5.0)
                Score = 100;
             else
                Score = 50;

            printf("Correct!\n");
            printf("Reaction Time = %.2f seconds\n", reactionTime);
            printf("Score = %d\n", score);
);
        }
        else
        {
            if (reactionTime < 5.0)
                Score = 20;
             else
                Score = 0;

            printf("Wrong answer!\n");
            printf("Score = %d\n", score);
        }
    }  

else if (choice == 3)
    {
        printf("\nBAT -> ");
        start = clock();
        scanf("%s", answer);
        end = clock();

        reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

        if (strcmp(answer, "TAB") == 0)
        {
            if (reactionTime < 5.0)
                score = 100;
            else
                score = 50;

            printf("Correct!\n");
            printf("Reaction Time = %.2f seconds\n", reactionTime);
            printf("Score = %d\n", score);
        }
        else
        {
            if (reactionTime < 5.0)
                score = 20;
            else
                score = 0;

            printf("Wrong answer!\n");
            printf("Score = %d\n", score);
        }
    }

    else if (choice == 4)
    {
        printf("\nTOP -> ");
        start = clock();
        scanf("%s", answer);
        end = clock();

        reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

        if (strcmp(answer, "POT") == 0)
        {
            if (reactionTime < 5.0)
                Score = 100;
             else
                Score = 50;
            printf("Correct!\n");

            printf("Correct!\n");
            printf("Reaction Time = %.2f seconds\n", reactionTime);
            printf("Score = %d\n", score);
        }
        else
        {
            if (reactionTime < 5.0)
                Score = 20;
             else
                Score = 0;

            printf(“Wrong answer!\n”);
            printf("Score = %d\n", score);
        }
    }
else if (choice == 5)
    {
        printf("\nRAM -> ");
        start = clock();
       scanf("%s", answer);
       end = clock();
    
      reactionTime = (double)(end - start)/ CLOCKS_PER_SEC;

        if (strcmp(answer, "ARM") == 0)
        {
            if (reactionTime < 5.0)
                Score = 100;
             else
                Score = 50;

            printf("Correct!\n");
            printf("Reaction Time = %.2f seconds\n", reactionTime);
            printf("Score = %d\n", score);
        }
        else
        {
            if (reactionTime < 5.0)
                Score = 20;
             else
                Score = 0;


            printf(“Wrong answer!\n”);
            printf("Score = %d\n", score);

        }
    }

    else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}
