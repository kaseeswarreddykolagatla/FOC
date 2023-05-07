#include <stdio.h>

int main() {
    int num_courses;
    float grade_points = 0;
    char grade;

    printf("Enter the number of courses: ");
    scanf("%d", &num_courses);

    for (int i = 1; i <= num_courses; i++) {
        printf("Enter grade for course %d (A, B, C, D, F): ", i);
        scanf(" %c", &grade);

        switch (grade) {
            case 'A':
                grade_points += 4.0;
                break;
            case 'B':
                grade_points += 3.0;
                break;
            case 'C':
                grade_points += 2.0;
                break;
            case 'D':
                grade_points += 1.0;
                break;
            case 'F':
                grade_points += 0.0;
                break;
            default:
                printf("Invalid grade entered. Try again.\n");
                i--;
                break;
        }
    }

    printf("Your grade point average for the semester is %.2f\n", grade_points / num_courses);

    return 0;
}
