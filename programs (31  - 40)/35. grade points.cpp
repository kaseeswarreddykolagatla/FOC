#include <stdio.h>

int main() {
    char grade;
    int units, total_units = 0;
    float grade_point, total_grade_points = 0.0;
    int stop = 0; // trip value to stop the loop
    

    while (!stop) {
        printf("Enter grade (A, B, C, D, F) and units (0 to stop): ");
        scanf(" %c %d", &grade, &units);
        switch (grade) {
            case 'A':
                grade_point = 4.0;
                break;
            case 'B':
                grade_point = 3.0;
                break;
            case 'C':
                grade_point = 2.0;
                break;
            case 'D':
                grade_point = 1.0;
                break;
            case 'F':
                grade_point = 0.0;
                break;
            default:
                stop = 1;
                continue; 
        }
        total_units += units;
        total_grade_points += grade_point * units;
    }
    
    
    if (total_units > 0) {
        float gpa = total_grade_points / total_units;
        printf("Your GPA for the semester is: %.2f\n", gpa);
    } else {
        printf("No grades entered.\n");
    }
    
    return 0;
}
