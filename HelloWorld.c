#include<stdio.h>
int main(){
    
    // This is a comment whooo
    /*
        this
        is
        a
        multiline
        comment
    */
    printf( "\"Hello plebian pissants.\" - Juan Hernadez muchacho si bravo un esta el loco poco no taco horchita\n");
    /*escape sequence = combination of characters consisting of a backlash \ followed by an letter
    \n = newline \t = tab*/
    
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    
    int a; //declaration where we declare that x is a variable and can only be an integer variable
    a=123; //initialization we say what x is equal to
    int b = 321; //both at the same time

    //int age = 21; //integer
    float gpa = 4.3456789; //demcimal 4 bytes 32 bits of precision 6-7 digits %f
    double numbers = 4.3456789123456; // 8 bytes 64 bits of precision 15-16 digits %lf
    char grade = 'F'; //single character %c
    char name[] = "Hataka Oyama"; //array of characters %s
    //bool e = true; //1 byte (true or false) %d
    printf("Hello %s\n",name);
    //printf("You are %d years old\n",age);
    
    //format specifier % = defines and formats a trype of data to be displayed

    //%c = character
    //%s = string (array of letters)
    //%f = float
    //%lf = double
    //%d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    //%- = left align

    float item1 = 5.50;
    float item2 = 10.00;
    float item3 = 13.75;

    printf("Item 1: $%8.2f\n", item1);
    printf("Item 2: $%8.2f\n", item2);
    printf("Item 3: $%8.2f\n", item3);
    
    //constant = a fixed value that cannot be altered by the program during the execution 

    const float PI = 3.14159;
     

    printf("%.5f\n", PI);
    
    //arithmetic operators

    // +
    // - 
    // * is multiply
    // / division
    // % modulus
    // ++ increment
    // -- decrement

    int x = 5;
    float y = 2;

    float z = x / y;

    printf("%f\n", z);

    int age;
    //fgets(name, 25, stdin);  -This is for input with white spaces/spaces

    printf("How old are you? :");
    scanf("%d", &age);

    printf("\nYou are %d years old.", age);


    
    return 0;
}