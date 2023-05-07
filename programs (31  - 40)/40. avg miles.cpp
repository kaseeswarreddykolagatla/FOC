#include <stdio.h>

int main() {
    int num_fillups = 6;
    double gallons[num_fillups];
    int odometer[num_fillups];
    int start_odometer;
    double total_gallons = 0.0;
    int total_miles = 0;

    printf("Enter the starting odometer reading: ");
    scanf("%d", &start_odometer);

    for (int i = 0; i < num_fillups; i++) {
        printf("Enter the number of gallons at fill-up %d: ", i+1);
        scanf("%lf", &gallons[i]);
        printf("Enter the odometer reading at fill-up %d: ", i+1);
        scanf("%d", &odometer[i]);
        total_gallons += gallons[i];
        if (i == 0) {
            total_miles += odometer[i] - start_odometer;
        } else {
            total_miles += odometer[i] - odometer[i-1];
        }
    }

    double mpg = total_miles / total_gallons;
    printf("Average miles per gallon for the past %d fill-ups: %.2lf\n", num_fillups, mpg);

    return 0;
}
