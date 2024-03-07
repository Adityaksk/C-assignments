#include <stdio.h>

int main() {
    int marks[5], total = 0, i;
    char grade;

    // Get marks for each subject
    printf("Enter marks for five subjects:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculate grade based on total marks
    if (total >= 90) {
        grade = 'E'; // 'Ex' is not a standard grade in most grading systems. Use 'E' instead.
    } else if (total >= 80) {
        grade = 'A';
    } else if (total >= 70) {
        grade = 'B';
    } else if (total >= 60) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    printf("Total marks: %d\n", total);
    printf("Grade: %c\n", grade);

    return 0;
}