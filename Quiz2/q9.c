#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random double precision number between 0 and 100 for each element in matrix
void generateRandomArray(int rows, int cols, double matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = (double)rand() / RAND_MAX * 100; // Generate random number between 0 and 100
        }
    }
}

// Function to find the maximum in column index 'columns'
double findMaxInColumn(int row, int col, double matrix[row][col], int columns) {
    double max = matrix[0][columns];
    for (int i = 1; i < row; i++) {
        if (matrix[i][columns] > max) {
            max = matrix[i][columns];
        }
    }
    return max;
}

// Function to find the minimum in row index 'rows'
double findMaxInRow(int row, int col, double matrix[row][col], int rows) {
    double max = matrix[rows][0];
    for (int j = 1; j < col; j++) {
        if (matrix[rows][j] > max) {
            max = matrix[rows][j];
        }
    }
    return max;
}

// Function to find the maximum in the whole matrix
double findMaxInMatrix(int row, int col, double matrix[row][col]) {
    double max = matrix[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    return max;
}

// Function to find the average in column index 'columns'
double findAverageInColumn(int row, int col, double matrix[row][col], int columns) {
    double sum = 0;
    for (int i = 0; i < row; i++) {
        sum += matrix[i][columns];
    }
    return sum / row;
}

// Function to find the average in row index 'rows'
double findAverageInRow(int row, int col, double matrix[row][col], int rows) {
    double sum = 0;
    for (int j = 0; j < col; j++) {
        sum += matrix[rows][j];
    }
    return sum / col;
}

// Function to find average in the whole matrix
double findAverageInMatrix(int row, int col, double matrix[row][col]) {
    double sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum += matrix[i][j];
        }
    }
    return sum / (row * col);
}

int main() {
    srand(time(NULL)); // Seed the random number generator

    int m = 150;
    int n = 150;
    double arr[m][n];

    // columns is the specified column for average and max
    int columns = 8;
    // rows is the specified row for average and max
    int rows = 5;

    // Generate random array
    generateRandomArray(m, n, arr);

    // Call the functions and do the prints
    printf("Maximum in column %d: %.6f\n", columns, findMaxInColumn(m, n, arr, columns));
    printf("Maximum in row %d: %.6f\n", rows, findMaxInRow(m, n, arr, rows));
    printf("Maximum in matrix: %.6f\n", findMaxInMatrix(m, n, arr));

    printf("Average in column %d: %.6f\n", columns, findAverageInColumn(m, n, arr, columns));
    printf("Average in row %d: %.6f\n", rows, findAverageInRow(m, n, arr, rows));
    printf("Average in matrix: %.6f\n", findAverageInMatrix(m, n, arr));

    return 0;
}

/*
b) when n and m = 3000 it exeeds the stack size (memory) similar to 8d
    storing a matrix that large led to a stack overflow.

    gcc -o largematrix q9.c -lgmp -Wl,-stack_size,100000000
    can increase the allocated memory when running the code allowing n and m = 3000

*/ 
