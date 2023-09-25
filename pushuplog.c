#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#define BUFFER_SIZE 1024

bool hasEnteredAlready( const char *filename, char *current_date){

    FILE *fd;                           
      
   static const long max_len = 55+ 1;  
   char buff[max_len + 1];           

if ((fd = fopen(filename, "rb")) != NULL)  {   
    printf("%s\n", current_date);
    fseek(fd, -max_len, SEEK_END);           
    fread(buff, max_len-1, 1, fd);            
    fclose(fd);                               

    buff[max_len-1] = '\0';    
    //check if it is a new/empty file
    if (strlen(buff) < 10){
        return false;
    }             
    char *last_newline = strrchr(buff, '\n'); 
    
    char *last_line = last_newline+1;

    
    // split line by pipe
    char *last_date;
    
    // get first element of token as date
    last_date = strtok(last_line, "|"); 
    // compare last_date to curreent date
    
    if (strcmp(last_date, current_date)==0){
        
        return true;
    } else {
        return false;
    }


    // while(token != NULL)
    // {
    //     printf("\n%s", token);
        
    //     token = strtok(NULL, p);
    // }
    
    
    // if same return true
    // if false rretun false
    
}
return false;
}

int main()
{
    time_t t = time(NULL);
    struct tm date = *localtime(&t);
    const char filename[] = "C:\\Users\\samue\\OneDrive\\Desktop\\codingting.txt";
    

    // char current_date[10];
    char *current_date;
    sprintf(current_date, "%02d-%02d-%d", date.tm_mon + 1, date.tm_mday, date.tm_year + 1900);
    
    if(hasEnteredAlready(filename, current_date)){
        printf("\nYou already logged");
        
    }
    else{
        FILE *pppF = fopen(filename, "w");
        fprintf(pppF, "PUSHUP LOG");
        fclose(pppF);
        FILE *ppF = fopen(filename, "a");
    fprintf(ppF, "\n%02d-%02d-%d|%02d:%02d, ", date.tm_mon + 1, date.tm_mday, date.tm_year + 1900, date.tm_hour, date.tm_min);
    fclose(ppF);
    char buffer[BUFFER_SIZE];
    bool keep_going = true;
    FILE *pF;
    pF = fopen(filename, "a");

    if(pF == NULL)
    {
       printf("Error opening file.\n");
       return 1;
    }               
    printf("\nEnter how many pushups did you do today: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    fputs(buffer, pF);
    fclose(pF);

    // pF = fopen(filename, "r");

    // int current_line = 1;
    // char c;
    // do
    // {
    //     c = fgetc(pF);
    //     if(c == '\n') current_line++;
    // } while (c != EOF);

    // printf("%d", current_line - 1);
    // fclose(pF);
    }
    
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
