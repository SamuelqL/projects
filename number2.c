
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


int main(){

    

    

   

    //double A = sqrt(27);
    //double B = pow(2, 4);
    //int C = round(3.14);
    //int D = ceil(3.14);
    int E = floor(3.99);
    //double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("\n%d", E);

    const double PI = 3.141592;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;
     
    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf", area);

    double A;
    double B;
    double C;
    printf("\nenter side A: ");
    scanf("%lf", &A);

    printf("enter side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("side C: %lf", C);

    
    int age;

    printf("\n Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are now signed up!");
    }else if(age == 0){
        printf("You can't sign in! You were just born!");
    }else if(age < 0){
        printf("Bro stop trolling ;-;");
    }else{
        printf("You are too young to sign up!");
    }
    
   
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
   
   char grade;

printf("\nEnter grade: ");
scanf(" %c", &grade);

   switch(grade){
      case 'A':
         printf("perfect!\n");
         break;
      case 'B':
         printf("You did good!\n");
         break;
      case 'C':
         printf("You did okay!\n");
         break;
      case 'D':
         printf("At least it's not an F!\n");
         break;
      case 'F':
         printf("YOU FAILED!\n");
         break;
      default:
         printf("Please enter only valid grades");
   }

char operator;
double num1;
double num2;
double result;

printf("\nEnter an operator (+ - * /): ");
scanf(" %c", &operator);

printf("enter number 1: ");
scanf(" %lf", &num1);

printf("enter number 2: ");
scanf(" %lf", &num2);

switch(operator){
    case '+':
        result = num1 + num2;
        printf("\nResult: %lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nResult: %lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nResult: %lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nResult: %lf", result);
        break;
    default:
        printf("%c is not a valid operator", operator);
}

    float celsius = 25;
    bool sunny = true;

    if(celsius >= 0 && celsius <= 30 && sunny){
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }

    // || (or) checls if atleast one condition is true
    //if(temp <= 0 || temp >= 30){
        //printf("\nThe weather is bad!");
    //}

    bool bright;

    if(!bright){
        printf("\nIt's dark outside!");
    }
    else{
        printf("\nIt's bright outside!");
    }
    // ! (not) reverse state of a condition
   
    return 0;
}