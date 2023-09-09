#include <stdio.h>
#include<math.h>

int main()
{
    float feet;
    float inches;
    printf("Enter your height(e.g 6'0): ");
    scanf("%f'%f", &feet,&inches);

    float weight;
    printf("Enter your weight in pounds(e.g 150.4): ");
    scanf("%f", &weight);

    float TotalInches = (feet * 12) + inches;
    float squared = TotalInches * TotalInches;

    float BMI = (weight/squared) * 703;

    printf("Your BMI is %.2f", BMI);

    if(BMI >= 30)
    {
        printf("\nYou are clinically obeset");
    }
    else
    {
        printf("\nYou are not obese!");
    }


    return 0;
}