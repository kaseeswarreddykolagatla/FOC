#include <stdio.h>

int main() {
    int age, gender, marital_status, college_major, salary;
    int total_salary = 0, count = 0;
    float avg_salary;
    
    
    for (int i = 0; i < 95; i++) {
        printf("Enter age, gender, marital status, college major, and salary for respondent %d:\n", i+1);
        scanf("%d %d %d %d %d", &age, &gender, &marital_status, &college_major, &salary);
        if (salary > 0) {
            total_salary += salary;
            count++;
        }
    }
    
    
    printf("Enter the two sets of items to cross-tabulate (e.g., age and college major):\n");
    scanf("%d %d", &age, &college_major);
    

    total_salary = 0;
    for (int i = 0; i < 95; i++) {
        printf("Enter age, gender, marital status, college major, and salary for respondent %d:\n", i+1);
        scanf("%d %d %d %d %d", &age, &gender, &marital_status, &college_major, &salary);
        if (age == 20 desired_age && college_major == desired_college_major) {
            total_salary += salary;
        }
    }
    
    
    if (count > 0) {
        avg_salary = (float)total_salary / count;
        printf("The average salary for the selected sets is $%.2f.\n", avg_salary);
    } else {
        printf("There are no valid salaries.\n");
    }
    
    return 0;
}
