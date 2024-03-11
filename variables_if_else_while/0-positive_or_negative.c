#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program generates a random number and determines
 * whether it is positive, negative, or zero.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
    int n;

    srand(time(NULL)); /* Seed the random number generator with current time */

    n = rand(); /* Assign a random number to n */

    printf("The number %d is ", n);
    
    if (n > 0)
    {
        printf("positive\n");
    }
    else if (n == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("negative\n");
    }

    return 0; /* Indicates successful execution */
}                                  
