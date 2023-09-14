#include <stdio.h>
#include <math.h>

int main()
{
    int chance = 0;
    char race;
    printf("What are your chances of getting into Harvard? Enter the question with 'Y' or 'N'");

    printf("\nAre you black: ");
    scanf(" %c", &race);

    char lgbbq;
    printf("\nAre you part of the LGBBQ community: ");
    scanf(" %c", &lgbbq);

    char religion;
    printf("\nAre you an atheist: ");
    scanf(" %c", &religion);

    char feminist;
    printf("\nAre you a feminist: ");
    scanf(" %c", &feminist);

    if(race == 'Y'&&lgbbq == 'Y'&&religion == 'Y'&&feminist == 'Y')
    {
        chance = 1000;
    }
    else if(race == 'N'&&lgbbq == 'N'&&religion == 'N'&&feminist == 'N')
    {
        chance = -100;
    }
    else{
        chance = 50;
    }

    printf("\nYour chance of getting into Harvard is: %d percent", chance);

}