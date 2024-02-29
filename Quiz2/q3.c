#include <stdio.h>

int main() {
    int age;
    int hasDiscount;
    char discountCode;
    int discount;

    // Asking for user's age
    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Do you have a discount code? (1 for yes, 0 for no): ");
    scanf("%d", &hasDiscount);

    

    if (hasDiscount==1) {
        // Asking for the discount code
        printf("Please enter your discount code (A, B, or C): ");
        scanf(" %c", &discountCode); // Note the space before %c to consume any preceding whitespace or newline
    } else if (hasDiscount==0){

    }else{
        printf("INVALID\n");
        return -1;
    }

    // Using switch statement to categorize the age group
    switch (age) {
        case 0 ... 12:
            discount = 50;
            break;
        case 13 ... 19:
            discount = 25;
            break;
        case 20 ... 64:
            discount = 0;
            break;
        case 65 ... 120:
            discount = 30;
            break;
        default:
            printf("Invalid age entered.\n");
            return -1;
            break;
    }
    //the ... just means interval so its 65 - 120


    // Applying extra discount based on the discount code
    switch (discountCode) {
        case 'A':
            discount += 5;
            break;
        case 'B':
            discount += 10; 
            break;
        case 'C':
            discount += 15; 
            break;
        default:
            break; // just does nothing
    }
    
    printf("Your discount is %d\n",discount);
}
