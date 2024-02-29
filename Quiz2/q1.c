#include <stdio.h>
//we declare variables and functions outside the main function just for good coding practice
//functions and variables must be defined before they are used

int nums[] = {10, 15, 6, 11, 17, 8, 10, 29, 12, 9};

int findFirstOccurrence(int number) {
    for (int i = 0; i < sizeof(nums); ++i) { //creates a for loop from 0 to len of nums increase by 1 
        if (nums[i] == number) {
            return i;
        }
    }
    return -1; // If number is not found
}

int main() {
    int number = 6;

    int index = findFirstOccurrence(number);
    if (index != -1) {
        printf("First %d is at index: %d\n", number, index);
    } else {
        printf("Number not found in the array.\n");
    }

    return 0;
}
