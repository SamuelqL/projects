#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

struct Student
{
    char name[12];
    float gpa;
}; 

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};


int main()
{
    struct Student student1 = {"Spongebob", 3.0};
    struct Student student2 = {"Patrick", 2.5};
    struct Student student3 = {"Sandy", 4.0};
    struct Student student4 = {"Squidward", 2.0};

    struct Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }

    enum Day today = Sun;

    //printf("%d", today); //enumns are not strings but they can be treated as int

    if(today == Sun || today == Sat)
    {
        printf("It the weekend!");
    }
    else
    {
        printf("I have to work today.");
    }

    srand(time(0));

    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    printf("\n%d", number1);
    printf("\n%d", number2);
    printf("\n%d", number3);


    const int MIN = 1;
    const int MAX = 100;
    int guess = 0;
    int guesses = 0;
    int answer = 0;
    //uses the curent time as a seed
    srand(time(0));
    //generate a random number between MIN & MAX
    answer = (rand() % MAX) + MIN;

    do{
        printf("\nEnter a number guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
          printf("Too low!\n");  
        }
        else{
            printf("\nCORRECT!\n");
        }
        guesses++;
    }while(guess != answer);


    printf("*************************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("*************************");

    
    char questions[][100] = {"1. Who was the founder of the Ford Motor Company?: ",
                             "2. Which company has the most employees?: ",
                             "3. What is Joe Biden'a favorite ice cream flavor?: "};

    char options[][100] = {"A. John Ford", "B. Henry Ford", "C. William Ford", "D. George Washington",
                           "A. Walmart", "B. Google", "C. Target", "D. Apple",
                           "A. Mint chip", "B. Strawberry cheesecake", "C. Cookies & Cream", "D. Chocolate chocolate chip"};

    char answers[] = {'B', 'A', 'D'};
    
    int numberofQuestions = sizeof(questions)/sizeof(questions[0]);

    char gues = ' ';
    int score = 0;

    printf("\nQUIZ GAME\n");

    for(int ii = 0; ii < numberofQuestions; ii++)
    {
        printf("********************\n");
        printf("%s\n", questions[ii]);
        printf("********************\n");

        for(int j = (ii * 4); j < (ii * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("guess: ");
        scanf("%c", &gues);
        scanf(" %c");

        gues = toupper(gues);

        if(gues == answers[ii])
        {
            printf("CORRECT\n");
            score++;
        }
        else
        {
            printf("WRONG!\n");
        }
    }

    printf("\nFINAL SCORE: %d/%d", score, numberofQuestions);



    return 0;
}