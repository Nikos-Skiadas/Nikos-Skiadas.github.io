#include <stdio.h>
#include <stdlib.h>

#define MAX 100000000

typedef unsigned long long Natural;

size_t memorized_stopping_times[MAX]; // It autmatically initialized to 0 as a global array

Natural collatz(Natural number)
{
    if(number % 2 == 1)
        return 3 * number + 1;

    else
        return number / 2;
}

size_t collatz_total_stopping_time(Natural number)
{
    size_t total_stopping_time = 0;

    Natural temp_number = number;

    while(temp_number > 1)
    {
        if(temp_number <= MAX && memorized_stopping_times[temp_number - 1] != 0)
        {
            total_stopping_time += memorized_stopping_times[temp_number - 1];
            break;
        }

        temp_number = collatz(temp_number); // ATTENTION: danger of overflow

        total_stopping_time += 1;
    }

    memorized_stopping_times[number - 1] = total_stopping_time; // remember path length for this number

    return total_stopping_time + 1; // length of sequence is all the steps plus the initial number
}

int main(int argc, char *argv[])
{
//    Make sure user provides two arguments for bounds only.
    if (argc != 3)
    {
        printf("Please provide a lower bound > 1 and an upped bound < 100000000.\n");

        return -1;
    }

//    Convert arguments to integers.
    long lower_bound = atoll(argv[1]);
    long upper_bound = atoll(argv[2]);

//    Default output.
    size_t max_collatz = 0;

//    Check that bounds are within specification and order.
    if(lower_bound >= 1 && upper_bound <= MAX && lower_bound < upper_bound)
        for (long number = lower_bound; number <= upper_bound; number += 1)
        {
            size_t total_stopping_time = collatz_total_stopping_time((Natural)number);

            if (max_collatz < total_stopping_time)
                max_collatz = total_stopping_time;
        }

    printf("%u\n", max_collatz);

    return 0;
}