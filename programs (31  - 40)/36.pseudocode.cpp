#include <stdio.h>

int main() {
    int num_students = 200;
    int grade, num_as = 0, num_bs = 0, num_cs = 0, num_ds = 0, num_fs = 0;

    for (int i = 1; i <= num_students; i++) {
        printf("Enter student number and grade for student %d: ", i);
        int student_num;
        scanf("%d %d", &student_num, &grade);

        char letter_grade;
        if (grade >= 90 && grade <= 100) {
            letter_grade = 'A';
            num_as++;
        } else if (grade >= 78 && grade <= 89) {
            letter_grade = 'B';
            num_bs++;
        } else if (grade >= 65 && grade <= 77) {
            letter_grade = 'C';
            num_cs++;
        } else if (grade >= 50 && grade <= 64) {
            letter_grade = 'D';
            num_ds++;
        } else {
            letter_grade = 'F';
            num_fs++;
        }

        printf("Student number: %d, Grade: %d, Letter grade: %c\n", student_num, grade, letter_grade);
    }

    printf("Total number of As: %d\n", num_as);
    printf("Total number of Bs: %d\n", num_bs);
    printf("Total number of Cs: %d\n", num_cs);
    printf("Total number of Ds: %d\n", num_ds);
    printf("Total number of Fs: %d\n", num_fs);

    return 0;
}
