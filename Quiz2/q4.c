#include <stdio.h>
#include <stdbool.h>

// Function to check if a given year is a leap year
bool leapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    else
        return false;
}
// % means remainder after dividing by a number 
// || means OR

int main() {
    int year;
    
    printf("Please enter a year: ");
    scanf("%d", &year);

    // Checking if the entered year is a leap year using the leapYear function
    if (leapYear(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is NOT a leap year.\n", year);

    return 0;
}
