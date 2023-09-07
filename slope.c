#include <stdio.h>
#include <math.h>

int main()
{
    int x1;
    int x2;
    int y1;
    int y2;
    printf("****************************\n");
    printf("SLOPE CALCULATOR OF 2 POINTS");
    printf("\n****************************");
    printf("\nEnter your first point: ");
    scanf("%d,%d", &x1, &y1);
    printf("\nEnter your second point: ");
    scanf("%d,%d", &x2, &y2);
    printf("(%d, )", x2);
    

    float rise;
    float run;

    run = x2 - x1;
    rise = y2 - y1;

    float slope = rise / run;

    printf("\nThe slope of your 2 points is: %f", slope);

    return 0;
}