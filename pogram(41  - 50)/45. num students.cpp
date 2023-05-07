#include <stdio.h>

#define NUM_STUDENTS 25
#define NUM_TESTS 3

int main() {
    
    int scores[NUM_STUDENTS][NUM_TESTS] = {
        {75, 82, 90},
        {68, 74, 82},
        {91, 89, 94},
        {63, 71, 80},
        {88, 94, 97},
        {79, 85, 89},
        {72, 78, 84},
        {83, 90, 95},
        {77, 81, 87},
        {85, 89, 93},
        {62, 70, 77},
        {71, 79, 86},
        {89, 93, 96},
        {76, 81, 88},
        {80, 86, 90},
        {67, 73, 80},
        {78, 85, 92},
        {81, 87, 91},
        {69, 77, 84},
        {84, 91, 95},
        {73, 79, 85},
        {90, 95, 98},
        {70, 77, 83},
        {87, 92, 96},
        {66, 72, 79}
    };

    int student_num, test_num;

    printf("Enter the student number (1-25): ");
    scanf("%d", &student_num);

    printf("Enter the test number (1-3): ");
    scanf("%d", &test_num);


    if (student_num < 1 || student_num > NUM_STUDENTS) {
        printf("Invalid student number\n");
        return 1;
    }

    if (test_num < 1 || test_num > NUM_TESTS) {
        printf("Invalid test number\n");
        return 1;
    }

    printf("Grade for student %d on test %d: %d\n", student_num, test_num, scores[student_num - 1][test_num - 1]);

    return 0;
}
