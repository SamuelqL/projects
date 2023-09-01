#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int  sum_digits(int numbero){
         int sum2 = 0;
        while(numbero != 0)
        {
            int digitt = numbero%10;
            sum2 = sum2 + digitt;
            numbero = numbero/10;

        }
        return sum2;
    }

    bool  are_digits_even(int num)
    {
        int sum = sum_digits(num);
        if (sum%2 ==0){
            return true;
        } else {
            return false;
        }
    }

int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    int a = number%2;

    if(a == 0)
    {
        printf("The number is even!\n");
    }
    else
    {
        printf("The number is odd!\n");
    }

    float side1; //heron's formula
    float side2;
    float side3;
    bool e = false;


    do
    {
        
        printf("\nEnter side 1: ");
        scanf("%f", &side1);
        printf("Enter side 2: ");
        scanf("%f", &side2);
        printf("Enter side 3: ");
        scanf("%f", &side3);

        e = side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1;

        if(e == false)
        {
            printf("This triangle can not exist. Try again.");
        }
    }while(e == false);

    float sp = (side1 + side2 + side3)/2;

    float answer = sqrt(sp*(sp-side1)*(sp-side2)*(sp-side3));

    printf("%f", answer);

    int values;
    float numbers;
    float sum;

    printf("\nHow many values do you have?: ");
    scanf("%d", &values);

    for(int i = 0; i < values; i++)
    {
        printf("Enter a number: ");
        scanf("%f", &numbers);

        sum = sum + numbers;
    }

    float average;
    average = sum/values;

    printf("The average of your numbers is %f", average);

    int num;
    printf("\nEnter an integer and i'll reverse it: ");
    scanf("%d",&num);
    
    int reversed = 0;

    while(num != 0)
    {
        int digit = num%10;
        num = num/10;
        reversed = (reversed*10)+digit;
        
    }
    printf("Your number reversed is %d", reversed);

    int numbero;
    printf("\nEnter an integer and i'll add up all its digits: ");
    scanf("%d", &numbero);

    int sum2 = 0;
    while(numbero != 0)
    {
        int digitt = numbero%10;
        sum2 = sum2 + digitt;
        numbero = numbero/10;

    }
    printf("The sum of your number's digits is %d", sum2);

    for(int ii = 10; ii < 30; ii++)
    {
        if(ii%3 == 0)
        {
            printf("\n%d",ii);
        }
    }

    
    for(int j = 130; j < 150; j++)
    {

        
        if(are_digits_even(j))
        {
            printf("\n%d",j);
        }
    }

   

    
    return 0;
}