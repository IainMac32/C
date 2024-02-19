#include <stdio.h>

int main() {
    int age;
    int isStudent;
    int discount = 0; 

    // Prompt user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Prompt user for student status
    printf("Are you a student? (1 for yes, 0 for no): ");
    scanf("%d", &isStudent);

    if (isStudent == 1 && (age > 5 && age < 30)) {
        isStudent = 1;
    } else{
        isStudent = 0;
    }
    //checks to make sure student is within age range

    if (age > 65 && age < 120) {
        discount = 50; // 50% discount

    } else if (age == 25 && isStudent) {
        discount = 40; // 40% discount

    } else if (age < 18 || isStudent) {
        discount = 30; // 30% discount

    } else if (age == 18 && !isStudent) {
        discount = 20; // 20% discount
    }
    // "||" is OR
    // "&&" is AND
    // 0 by default so if non apply it will be 0%

    printf("\nAge: %d\n", age);
    printf("Student: %s\n", isStudent ? "Yes" : "No"); 
    printf("Discount: %d%%\n", discount); 
    // double percent sign since by default its a format specifier
    // it is after the integer specifier

    return 0;
}
