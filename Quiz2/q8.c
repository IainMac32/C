#include <stdio.h>
#include <time.h>

// Function to calculate factorial iteratively
unsigned long long factorialIterative(int n)
{
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

// Function to calculate factorial recursively
unsigned long long factorialRecursive(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}

int main()
{
    int n;
    printf("Enter a number to compute its factorial: ");
    scanf("%d", &n);

    // Measuring time for factorial calculation using iterative method
    clock_t startIterative = clock();
    unsigned long long factorialIte = factorialIterative(n);
    //holds more digits
    clock_t endIterative = clock();
    double timeTakenIterative = ((double)(endIterative - startIterative)) * 1000 / CLOCKS_PER_SEC;
    // CLOCKS PER SEC number of clock ticks per second you are converting clock ticks which is what end and start are to seconds
    //then * 1000 is from seconds to milliseconds

    printf("Factorial of %d (Iterative): %llu\n", n, factorialIte);
    printf("Time taken (Iterative): %.6f milliseconds\n", timeTakenIterative);

    // Measuring time for factorial calculation using recursive method
    clock_t startRecursive = clock();
    unsigned long long factorialRec = factorialRecursive(n);
    clock_t endRecursive = clock();
    double timeTakenRecursive = ((double)(endRecursive - startRecursive)) * 1000 / CLOCKS_PER_SEC;

    printf("Factorial of %d (Recursive): %llu\n", n, factorialRec);
    printf("Time taken (Recursive): %.6f milliseconds\n", timeTakenRecursive);


    return 0;
}
