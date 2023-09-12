#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void Area_Circumference();
void Temperature_Converter();
void BMI_Calculator();
void Slope_Calculator();
void Number_Guessing_Game();


int main()
{
    char response;
    do
    {
        char choices[][100] = {"A. Circumference and area of a circle with radius",
                               "B. Temperature converter",
                               "C. BMI calculator",
                               "D. Slope calculator of 2 points",
                               "E. Number guessing game"};

        char choice;
        bool isValidChoice = false;
        int NumberofChoices = sizeof(choices)/sizeof(choices[0]);
        printf("Which project would you like to do? ");
        for(int i = 0; i < NumberofChoices; i++)
            {
                printf("\n%s", choices[i]);
            }
        

        do
        {
            printf("\nChoice: ");
            scanf(" %c", &choice);
            choice = toupper(choice);
            
            isValidChoice = (choice == 'A' || choice == 'B'|| choice == 'C'|| choice == 'D'|| choice == 'E');
            
            if (!isValidChoice){
                printf("\nThat is not a valid choice. Please enter again.");
            
            }
   

        }while(!isValidChoice);

        if(choice == 'A')
            {
                Area_Circumference();
            }
        else if(choice == 'B')
            {   
                Temperature_Converter();
            }
        else if(choice == 'C')
            {
                BMI_Calculator();
            }
        else if(choice == 'D')
            {
                Slope_Calculator();
            }
        else if(choice =='E')
            {
                Number_Guessing_Game();
            }
        

        printf("\nWould you like to try do something else?(Y/N): ");
        scanf(" %c", &response);
        response = toupper(response);
    }while (response =='Y');

    printf("\nThank you for trying my projects.");
    
    return 0;
}
void Area_Circumference()
{
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;
    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf", area);
}
void Temperature_Converter()
{
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf(" %c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is: %.1f", temp);
    }
    else if(unit == 'F'){
        printf("\nEnter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1f", temp);
    }
    else{
        printf("\n %c is not a valid unit of measurement", unit);
    }
}
void BMI_Calculator()
{
    char system;
    printf("Do you use the imperial(I) or the metric system?(M): ");
    scanf(" %c", &system);
    system = toupper(system);
    

    float feet;
    float inches;
    float weight;
    float BMI;
    float meters;
    float centimeters;
    float kilograms;
    float squared;
    if(system == 'I')
    {
        printf("Enter your height(e.g 6'0): ");
    scanf("%f'%f", &feet,&inches);

    printf("Enter your weight in pounds(e.g 150.4): ");
    scanf("%f", &weight);

    float TotalInches = (feet * 12) + inches;
    squared = TotalInches * TotalInches;

    BMI = (weight/squared) * 703;
    }
    else if(system == 'M')
    {
        printf("Enter your height in centimeters(e.g 170.2): ");
        scanf("%f", &centimeters);
        printf("Enter your weight in kilos(e.g 85.7): ");
        scanf("%f", &kilograms);

        meters = centimeters/100;

        squared = meters * meters;

        BMI = kilograms/squared;
    }
    else
    {
        printf("That is not a valid system, enter again.");
    }
    

    printf("Your BMI is %.2f", BMI);

    if(BMI >= 30)
    {
        printf("\nYou are clinically obeset, eat a salad ya donut! DRINK WATER, BREATHE AIR!");
    }
    else
    {
        printf("\nYou are not obeset! STAY HARD!");
    }
}
void Slope_Calculator()
{
    float x1;
    float x2;
    float y1;
    float y2;
    printf("****************************\n");
    printf("SLOPE CALCULATOR OF 2 POINTS");
    printf("\n****************************");
    printf("\nEnter your first point(x,y): ");
    scanf("%f,%f", &x1, &y1);
    printf("\nEnter your second point(x,y): ");
    scanf("%f,%f", &x2, &y2);
    
    

    float rise;
    float run;

    run = x2 - x1;
    rise = y2 - y1;

    float slope = rise / run;

    printf("\nThe slope of your 2 points is: %f", slope);
}
void Number_Guessing_Game()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess = 0;
    int guesses = 0;
    int answer = 0;

    srand(time(0));
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
}



