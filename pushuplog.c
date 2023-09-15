#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 1024

int main()
{
    char buffer[BUFFER_SIZE];
    bool keep_going = true;
    //FILE *pF;
    //pF = fopen;

    while(keep_going)
    {
        fgets(buffer, BUFFER_SIZE, stdin);
        printf("%s", buffer);

        if (strcmp(buffer, "quit\n")== 0)
    {
        keep_going = false;
    }
    }
    
    return 0;

}
