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
    printf("\nEnter your first x point: ");
    scanf("%d", &x1);
    printf("Enter your first y point: ");
    scanf("%d", &y1);
    printf("Enter your second x point: ");
    scanf("%d", &x2);
    printf("Enter your second y point: ");
    scanf("%d", &y2);

    int rise;
    int run;

    run = x2 - x1;
    rise = y2 - y1;

    int slope = rise / run;

    printf("The slope of your 2 points is: %d", slope);

    return 0;
}