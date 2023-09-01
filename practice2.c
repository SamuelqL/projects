#include <stdio.h>
#include <stdbool.h>
bool is_prime(int number)
{
    bool isprime = true;
    
    for(int i = 2; i < number; i++)
    {
        if(number%i == 0)
        {
            isprime = false;
            break;
        }
    }return isprime;
}

int main()
{
    int number;
    printf("Enter an integer greater than 1: ");
    scanf("%d", &number);

    
    /*if(isprime == 1)
        {
            printf("%d is a prime number!", number);
        }else{
            printf("%d is not a prime number!", number);
        }*/

        for(int i = 2; i <= number; i++)
        {
            if (is_prime(i))
            {
                printf("\n%d", i);
            }
        }

        for(int ii = 10; ii >= 1; ii-=1)
        {
            printf("\n%d", ii);
        }

    

    
    return 0;
}