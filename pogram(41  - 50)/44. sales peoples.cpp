#include <stdio.h>

#define NUM_SALESPEOPLE 10
#define NUM_DAYS 7

int main() {
    float sales[NUM_SALESPEOPLE][NUM_DAYS];  
    float total_sales_day[NUM_DAYS] = {0};   
    float total_sales_week = 0;              
    int day, person;

    
    for (person = 0; person < NUM_SALESPEOPLE; person++) {
        printf("Enter sales for salesperson %d:\n", person+1);
        for (day = 0; day < NUM_DAYS; day++) {
            printf("Day %d: ", day+1);
            scanf("%f", &sales[person][day]);
        }
    }


    printf("\nAverage sales per salesperson per week:\n");
    for (person = 0; person < NUM_SALESPEOPLE; person++) {
        float total_sales_person = 0;
        for (day = 0; day < NUM_DAYS; day++) {
            total_sales_person += sales[person][day];
        }
        printf("Salesperson %d: $%.2f\n", person+1, total_sales_person/NUM_DAYS);
    }
    for (day = 0; day < NUM_DAYS; day++) {
        for (person = 0; person < NUM_SALESPEOPLE; person++) {
            total_sales_day[day] += sales[person][day];
            total_sales_week += sales[person][day];
        }
        printf("Total sales for day %d: $%.2f\n", day+1, total_sales_day[day]);
    }
    printf("Total sales for the week: $%.2f\n", total_sales_week);

    return 0;
}
