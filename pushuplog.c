#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define BUFFER_SIZE 1024

int main()
{
    time_t t = time(NULL);
    struct tm date = *localtime(&t);
    FILE *ppF = fopen("C:\\Users\\samue\\OneDrive\\Desktop\\codingting.txt", "a");
    fprintf(ppF, "%02d-%02d-%d|%02d:%02d\n", date.tm_mon + 1, date.tm_mday, date.tm_year + 1900, date.tm_hour, date.tm_min);
    fclose(ppF);
    
    char buffer[BUFFER_SIZE];
    bool keep_going = true;
    FILE *pF;
    pF = fopen("C:\\Users\\samue\\OneDrive\\Desktop\\codingting.txt", "a");

    if(pF == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    printf("\nEnter how many pushups did you do today: ");
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
