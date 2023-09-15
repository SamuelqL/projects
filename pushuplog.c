#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 1024

int main()
{
    char buffer[BUFFER_SIZE];
    bool keep_going = true;
    FILE *pF;
    pF = fopen("C:\\Users\\samue\\OneDrive\\Desktop\\codingting.txt", "w");

    if(pF == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter how many pushups you did today: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    fputs(buffer, pF);
    fclose(pF);


    /*while(keep_going)
    {
        fgets(buffer, BUFFER_SIZE, stdin);
        
    if (strcmp(buffer, "quit\n")== 0)
    {
        keep_going = false;
    }
    else fputs(buffer, pF);
    }
    fclose(pF);*/
    
    return 0;

}
