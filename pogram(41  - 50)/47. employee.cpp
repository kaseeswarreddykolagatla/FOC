#include <stdio.h>

struct Employee {
    char name[50];
    char gender;
    int age;
    char department[50];
    float wage;
};

int main() {
    FILE *fp;
    struct Employee emp;
    int num_women = 0;
    float sum_women_wages = 0.0;
    int num_men = 0;
    float sum_men_wages = 0.0;

    fp = fopen("employees.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(fp, "%s %c %d %s %f", emp.name, &emp.gender, &emp.age, emp.department, &emp.wage) != EOF) {
        if (emp.gender == 'F') {
            num_women++;
            sum_women_wages += emp.wage;
        } else if (emp.gender == 'M') {
            num_men++;
            sum_men_wages += emp.wage;
        }
    }

    fclose(fp);

    float avg_women_wage = sum_women_wages / num_women;
    float avg_men_wage = sum_men_wages / num_men;

    printf("Average wage of women: %.2f\n", avg_women_wage);
    printf("Average wage of men: %.2f\n", avg_men_wage);

    return 0;
}
