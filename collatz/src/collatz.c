#include <stdio.h>
#include <stdlib.h>

size_t collatz(int n) 
{
    size_t length = 1;

    while (n != 1) 
    {
        if (n % 2 == 0) 
        {
            n /= 2;
        } 
        else 
        {
            n = 3 * n + 1;

            length++;
            n /= 2;
        }
        length++;
    }

    return length;
}

int main(int argc, char *argv[]) 
{

    if(argc != 3)
    {
        printf("Please provide a lower bound >= 1 and an upper bound <=100000000\n");
        return -1;
    }

    int lower_bound = atoi(argv[1]);
    int upper_bound = atoi(argv[2]);
    
    if (lower_bound <= 0 || lower_bound > upper_bound || upper_bound > 100000000) 
    {
        printf("%d\n", 0);
    } 
    else 
    {
        size_t maxSeqLength = 0;

        for (int i = lower_bound; i <= upper_bound; i++) 
        {
            size_t length = collatz(i);
            if (length > maxSeqLength) 
            {
                maxSeqLength = length;
            }
        }

        printf("The largest Collatz sequence for numbers from %d to %d is %d.", lower_bound, upper_bound, maxSeqLength);
    }

    return 0;
}

