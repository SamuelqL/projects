#include <stdio.h>
#include <math.h>

int main()
{
    float x1;
    float x2;
    float y1;
    float y2;
    printf("****************************\n");
    printf("SLOPE CALCULATOR OF 2 POINTS");
    printf("\n****************************");
    printf("\nEnter your first point(x,y): ");
    scanf("%f,%f", &x1, &y1);
    printf("\nEnter your second point(x,y): ");
    scanf("%f,%f", &x2, &y2);
    
    

    float rise;
    float run;

    run = x2 - x1;
    rise = y2 - y1;

    float slope = rise / run;

    printf("\nThe slope of your 2 points is: %f", slope);

    return 0;
}