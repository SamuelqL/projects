#include <stdio.h>
#include <string.h>

void sort(int array[], int size)
{
    for(int i = 0; i < size - i; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

struct Player
{
    char name[12];
    int score;
};

//typedef char user[25];

 typedef struct 
{
    char name[25];
    char password[12];
    int id;
} User;



int main()
{
    for(int i = 1; i <= 5; i++)
    {
        if(i == 3)
        {
            continue;
        }
        printf("%d\n", i);
    }

    double prices[] = {5.0, 10.0, 15.0, 25.0, 30.0, 20.0,};

    //printf("%d bytes\n", sizeof(prices));
    
    for(int ii = 0; ii < sizeof(prices)/sizeof(prices[0]); ii++)
    {
        printf("$%.2lf\n", prices[ii]);
    }

    /*int numbers[2][3] = {
                        {1, 2, 3},
                        {4, 5, 6}
                        };
    */

   int numbers[3][3];

   int rows = sizeof(numbers)/sizeof(numbers[0]);
   int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

   printf("rows: %d\n", rows);
   printf("columns: %d\n", columns);

   numbers[0][0] = 1;
   numbers[0][1] = 2;
   numbers[0][2] = 3;
   numbers[1][0] = 4;
   numbers[1][1] = 5;
   numbers[1][2] = 6;
   numbers[2][0] = 7;
   numbers[2][1] = 8;
   numbers[2][2] = 9;

   for(int iii = 0; iii < rows; iii++)
   {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[iii][j]);
        }
        printf("\n");
   }

   char cars[][10] = {"Mustang","Corvette","Camaro"};

   strcpy(cars[0], "Tesla");

   for(int k = 0; k < sizeof(cars)/sizeof(cars[0]); k++)
   {
    printf("%s\n", cars[k]);
   }

char x[15] = "water";
char y[15] = "soda";
char temp[15];

strcpy(temp, x);
strcpy(x, y);
strcpy(y, temp);

printf("x = %s\n", x);
printf("y = %s\n", y);

int array[] = {13, -1, 2, 0, 5, 8, 1 };
int size = sizeof(array)/sizeof(array[0]);

sort (array, size);
printArray(array, size);

struct Player player1;
struct Player player2;

strcpy(player1.name, "Joe");
player1.score = 4;

strcpy(player2.name, "Mama");
player2.score = 5;

printf("\n%s:\n", player1.name);
printf("%d\n", player1.score);

printf("%s:\n", player2.name);
printf("%d\n", player2.score);

User user1 = {"bro", "password123", 123456789};
User user2 = {"bruh", "password321", 987654321};

printf("%s\n", user1.name);
printf("%s\n", user1.password);
printf("%d\n", user1.id);
printf("\n");
printf("%s\n", user2.name); 
printf("%s\n", user2.password);
printf("%d\n", user2.id);


    return 0;
}
