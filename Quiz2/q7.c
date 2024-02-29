#include <stdio.h>
#include <stdlib.h>

// Function to compute the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char *argv[]) {
    //argc stands for "argument count" and represents the number of command-line arguments passed
    //argv[] stands for "argument vector" and is an array of strings (char *). 
    //Each element of this array represents one of the command-line arguments.

    if (argc != 2) {
        printf("Usage: %s <n>\n", argv[0]);
        return 1;
    }
    //the calling of the output file is 1 then the # is 2
    //     ./a.out 10

    int n = atoi(argv[1]); 
    // Convert command-line argument to integer

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    int fib = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, fib);

    return 0;
}
