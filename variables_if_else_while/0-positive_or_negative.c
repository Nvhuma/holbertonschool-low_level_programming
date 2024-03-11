#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    srand(time(NULL)); // Seed the random number generator with current time

    n = rand(); // Assign a random number to n

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

    return 0; // Indicates successful execution
}                                  
