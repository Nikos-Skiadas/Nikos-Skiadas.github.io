
# Collatz Conjecture

## Description

This code implements the _Collatz Conjecture_, a mathematical sequence defined as follows:

1. Start with any positive integer $n$.
2. If $n$ is even, divide it by 2.
3. If $n$ is odd, multiply it by 3 and add 1.
4. Repeat the process with the new value of $n$, and continue until $n$ reaches 1.

The conjecture suggests that, regardless of the initial value of $n$, the sequence will always reach the value 1.

## Implementation

The code is written in C and consists of the following components:

1. __Header Files__: The code includes the standard library headers `<stdio.h>` and `<stdlib.h>`. These are used for input and output operations and memory allocation.
2. __Constants__: It defines a constant `MAX` with a value of $10^8$ which serves as an upper limit for the input range.
3. __Data Types__: It defines a custom data type Natural as an unsigned long long integer.
4. __Global Array__: An array memorized_stopping_times is used to store the stopping times for numbers in the Collatz sequence. It is initialized to all zeros.
5. __Functions__:
    - `collatz`: This function takes a natural number as input and returns the next number in the Collatz sequence according to the rules described above.
    - `collatz_total_stopping_time`: This function calculates the total stopping time for a given natural number, which is the number of steps required to reach the value 1 in the Collatz sequence. It uses memoization to store previously computed stopping times to improve efficiency.
6. __Main Function__: The main function is the entry point of the program. It reads two command-line arguments, `lower_bound` and `upper_bound`, which define the range of numbers to be checked. It then iterates through this range, computing the total stopping time for each number and keeping track of the maximum stopping time encountered.

## Compilation & Example 

Go to the `collatz/src` folder before executing the commands below.

Compile with the command:

```sh
gcc -O0 -m32 -Wall -Wextra -Werror -pedantic -o collatz collatz.c
```

Execute for example as:

```sh
./collatz 77 88888888 
```

If bounds are in an input file and we want to display it in an output file then for example we execute it with the command:

```sh
./collatz $(< ../test/input) > ../test/output
```

## Note

The code provides error checking for the number of command-line arguments and ensures that the lower and upper bounds are within the specified range.
It also uses memoization to store previously computed stopping times to optimize calculations.
