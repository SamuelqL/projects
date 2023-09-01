#include <stdio.h>
#include <string.h>

void birthday(char name[], int age)
{
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
    
}

double square(double x)
{
    return x * x;
}

int findMax(int x, int y)
{
    return (x > y) ? x : y;
}

void hello(char[], int); //funtion prototype ensures that calls to a function are made with the correct arguments


int main(){
    
    char name[] = "Obama";
    int age = 21;

    birthday(name, age);

    double x = square(3.14);
    printf("\n%lf", x);

    int max = findMax(2, 4);

    printf("\n%d", max);

    char namee[] = "Joe biden";
    int agee = 1000;

    hello(namee, agee);

    char string1[] = "Bro";
    char string2[] = "Code";

    //strlwr(string1);  //converts a string to lowercase
    //strupr(string1);  //converts a string to uppercase
    //strcat(string1, string2);  // appends string2 to the end of string1
    //strncat(string1, string2, 1);  //appends n characters from string2 to string1
    //strcpy(string1, string2);  //copy string2 to string1
    //strncpy(string1, string2, 1);  //copy n characters of string2 to string 1
    //strset(string1, '?');  //sets all characters of a string to a given character
    //strset(string1, 'x', 1);  //sets first n characters of a string to a given character
    //strrev(string1);  //reverses a string

    //int result = strlen(string1);  //returns string length as int
    //int result = strcmp(string1, string2);  //string compare all characters 
    //int result = strncmp(string1, string2, 1);  //string compare all n characters 
    //int result = strcmpi(string1, string1);  //string compare all (ignore case)
    //int result = strnicmo(string1, string2, 1);  //string compare n charactera (ignore case)


    printf("\n%s", string1);

    for(int i = 10; i >= 1; i-=2)
    {
        printf("\n%d", i);
    }

    //while loop = repeats a section of code possibly unlimited times
    // WHILE some conditions remain true
    //a while loop might not exucute at all

    char n[25];

    printf("\nWhat's your name: ");
    fgets(n, 25, stdin);
    n[strlen(n) - 1] = '\0';

    while(strlen(n) == 0)
    {
        printf("\nYou did not enter your name!");
        printf("\nWhat's your name: ");
        fgets(n, 25, stdin);
        n[strlen(n) - 1] = '\0';
    }

    printf("Hello %s", n);

    int number = 0;
    int sum = 0;

    do{
        printf("\nEnter a number above 0: ");
        scanf("%d", &number);
        if(number > 0)
        {
            sum += number;
        }
    }while(number > 0);

    printf("sum: %d", sum);

    int rows; 
    int columns;
    char symbol;

    printf("\nEnter number of rows: ");
    scanf("%d", &rows);
    
    printf("\nEnter number of columns: ");
    scanf("%d", &columns);

    printf("\nEnter a symbol: ");
    scanf(" %c", &symbol);

    for(int ii = 1; ii <=rows; ii++)
    {
        for(int j = 1; j<= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
    
    return 0;
}
void hello(char namee[], int agee)
{
    printf("\nHello %s", namee);
    printf("\nYou are %d years old", agee);
}