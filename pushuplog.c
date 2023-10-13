#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#define BUFFER_SIZE 1024

/*bool hasEnteredAlready( const char *filename, char *current_date){
    
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
    printf("%s", last_date);
    // compare last_date to curreent date
    

    // while(token != NULL)
    // {
    //     printf("\n%s", token);
        
    //     token = strtok(NULL, p);
    // }
    
    
    // if same return true
    // if false rretun false
    
}
return false;
}*/
int get_line_num(char *filename){
    FILE *pF;
    pF = fopen(filename, "r");

    int current_line = 0;
    char c;
    do
    {
        c = fgetc(pF);
        if(c == '\n') current_line++;
    } while (c != EOF);

    //printf("%d", current_line);
    fclose(pF);

    return current_line;    

}


void log_pushup(char *filename){
      // Ask user for pushup // store pushup number into variable
    printf("\nEnter how many pushups did you do today: ");
    char pushups[BUFFER_SIZE];
    fgets(pushups, BUFFER_SIZE, stdin);
    
    
    // open file
    FILE *ppF = fopen(filename, "a");
    // store timestamp and pushup
    time_t t = time(NULL);
    struct tm date = *localtime(&t);
    // write datetime and pushup to file
    fprintf(ppF, "%02d-%02d-%d|%02d:%02d,%s", date.tm_mon + 1, date.tm_mday, date.tm_year + 1900, date.tm_hour, date.tm_min, pushups);
    // closee file  
    fclose(ppF);
                
}

char *get_log_line(int line_number, const char *filename){
    //variable to hold line;
    static char line[256]; /* or other suitable maximum line size */

    //open file
    FILE *pF;
    pF = fopen(filename, "r");
    if(pF == NULL)
    {
        // print error then exit
       printf("Error opening file.\n");
       return line;
    }
    else
    {
        int count = 0;
        
        while (fgets(line, sizeof line, pF) != NULL) /* read a line */
        {
            if (count == line_number)
            {
                //use line or in a function return it
                //in case of a return first close the file with "fclose(file);"
                fclose(pF);
                return line;
                
            }
            else
            {
                count++;
            }
        }
        fclose(pF);

        return line;
        
    }

}


char *get_line_element(char* log_record, int element, char* seperator){

    //variable to hold pushup;
    static char pushups[256]; /* or other suitable maximum line size */ 

    char *token;
   
    /* get the first token */
    token = strtok(log_record, seperator);
   
    int count = 0;
    // /* walk through other tokens */
    while( token != NULL ) {
        if (count == element){
            sprintf(pushups, "%s", token);
            break;
        }else{
            token = strtok(NULL, seperator);
            count++;
        }
    }
    return pushups;
}    


int main()
{
    
    char filename[] = "C:\\Users\\samue\\OneDrive\\Desktop\\codingting.txt";
    
    // function to record pushup
    log_pushup(filename);
    
    // get a line of log
    char *first_line = get_log_line(0, filename);
    char p[2] = "|";
    char *first_date;

    first_date = strtok(first_line, p);
    
    // extract out pushup number
    //char *s = ",";
    //char *pushups = get_line_element(log_line, 1, s);
    //printf("%s", pushups);

    int current_line = get_line_num(filename);
    char *last_line = get_log_line(current_line, filename);
    char *last_date;

    last_date = strtok(last_line, p);
    


    // get_pushup_number(log_line);
    // char *current_date;
    //sprintf(current_date, "%02d-%02d-%d", date.tm_mon + 1, date.tm_mday, date.tm_year + 1900);
    
    return 0;

}
