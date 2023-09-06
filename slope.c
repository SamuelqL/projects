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
    printf("\n( , )");
    printf("\nEnter your first x point: ");
    scanf("%d", &x1);
    printf("(%d, )", x1);
    printf("\nEnter your first y point: ");
    scanf("%d", &y1);
    printf("(%d,%d )", x1, y1);
    printf("\nEnter your second x point: ");
    scanf("%d", &x2);
    printf("(%d, )", x2);
    printf("\nEnter your second y point: ");
    scanf("%d", &y2);
    printf("(%d,%d)", x2, y2);

    float rise;
    float run;

    run = x2 - x1;
    rise = y2 - y1;

    float slope = rise / run;

    printf("\nThe slope of your 2 points is: %f", slope);

    return 0;
}