#include <stdio.h>

void printAge(int *pAge)
{
    printf("You are %d years old", *pAge);
}

int main()
{
    // bitwise operators = special operators used in bit level programming 

    // & = AND  | = OR  ^ = XOR  << left shift  >> right shift

    int x = 6;  //00000110
    int y = 12; //00001100
    int z = 0;  //00000000

    z = x & y;
    printf("AND = %d\n", z);

    z = x | y;
    printf("OR = %d\n", z);

    z = x ^ y;
    printf("XOR = %d\n", z);

    z = x << 2;
    printf("S LEFT = %d\n", z);

    z = x >> 1;
    printf("S RIGHT = %d\n", z);

    //memory = an array of bytes within RAM(a street)
    //memory block = a single unit (byte) within memory, used to hold some value (person)
    //memory address = the address of where a memory block is located (house address)
    char a;
    char b[3]; 
    ;

    printf("%d byte\n", sizeof(a));
    printf("%d byte\n", sizeof(b));
    
    printf("%p\n", &a);
    printf("%p\n", &b);

    //pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //          some tasks are performed easier with pointers
    //          * = indirection operator (value at address)

    int age = 21;
    int *pAge = &age;

    printf("address of age: %p\n", &age); 
    printf("value of Page: %p\n", pAge); 

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));

    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAge); 

    printAge(pAge);

    // FILE *pF = fopen("C:\\Users\\samue\\OneDrive\\Desktop\\poem.txt", "a");

    // fprintf(pF, "\npatrick star");

    // fclose(pF);

    /*if(remove("C:\\Users\\samue\\OneDrive\\Desktop\\test.txt") == 0)
    {
        printf("\nThat file was deleted successfully!");
    }
    else
    {
        printf("\nThat file was NOT deleted successfully");
    }*/

    FILE *pF = fopen("C:\\Users\\samue\\OneDrive\\Desktop\\poem1.txt", "r");
    char buffer[255];

    if(pF == NULL)
    {
        printf("\nUnable to open file!");
    }
    else
    {
        while(fgets(buffer, 255, pF) != NULL)
        {
        printf("%s", buffer);
        }   
    }

    
    fclose(pF);

    return 0;
}