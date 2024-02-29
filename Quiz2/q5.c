#include <stdio.h>
#define NUM_STUDENTS 5
//we do this to have the num of students as a variable so its easier to change if we want 6 students for example


void inputGrades(float grades[]) {
    printf("Enter grades for %d students:\n", NUM_STUDENTS);
    for (int i = 0; i < NUM_STUDENTS; i++) {
        do {
            printf("Enter grade for student %d: ", i + 1);
            scanf("%f", &grades[i]);
            if (grades[i] < 0 || grades[i] > 100) {
                printf("Grade must be between 0 and 100. Please try again.\n");
            }
        } while (grades[i] < 0 || grades[i] > 100);
    }
}

void analyzeGrades(float grades[]) {
    float sum = 0;
    float highest = grades[0];
    float lowest = grades[0];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        sum += grades[i];

        if (grades[i] > highest) {
            highest = grades[i];
        }

        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }

    float average = (float)sum / NUM_STUDENTS;


    printf("Average grade: %.2f\n", average);
    printf("Highest grade: %.2f\n", highest);
    printf("Lowest grade: %.2f\n", lowest);
}






int main() {
    float grades[NUM_STUDENTS];
    //since NUM_STUDENTS is 5 it means there is 5 values in the grades list

    inputGrades(grades);

    analyzeGrades(grades);


    return 0;
}
