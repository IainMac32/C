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
    if (argc != 2) {
        printf("Usage: %s <n>\n", argv[0]);
        return 1;
    }

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
