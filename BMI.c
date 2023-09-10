#include <stdio.h>
#include<math.h>
#include <ctype.h>

int main()
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


    return 0;
}