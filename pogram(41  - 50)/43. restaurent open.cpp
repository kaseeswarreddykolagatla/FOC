#include <stdio.h>
#include <math.h>

#define HOURS_IN_DAY 24
#define MIN_EMPLOYEES 3

int main() {
    int customers[HOURS_IN_DAY][14];
    int i, j, total_customers, additional_employees, total_employees;
    float avg_customers;

    
    for (i = 0; i < HOURS_IN_DAY; i++) {
        printf("Enter the number of customers for hour %d:\n", i);
        for (j = 0; j < 14; j++) {
            scanf("%d", &customers[i][j]);
        }
    }

    
    for (i = 0; i < HOURS_IN_DAY; i++) {

        total_customers = 0;
        for (j = 0; j < 14; j++) {
            total_customers += customers[i][j];
        }
        avg_customers = total_customers / 14.0;


        additional_employees = ceil(avg_customers / 20);

        
        total_employees = MIN_EMPLOYEES + additional_employees;

        printf("Hour %d: %d employees\n", i, total_employees);
    }

    return 0;
}
