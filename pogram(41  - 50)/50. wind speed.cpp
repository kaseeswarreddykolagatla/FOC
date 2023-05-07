#include <stdio.h>

int main() {
    int i, max_index, min_index;
    double sum = 0.0, max_speed = 0.0, min_speed = 100.0;
    double windspeed[14];


    for (i = 0; i < 14; i++) {
        printf("Enter the fastest wind speed for day %d: ", i+1);
        scanf("%lf", &windspeed[i]);
        sum += windspeed[i];
        
        
        if (windspeed[i] > max_speed) {
            max_speed = windspeed[i];
            max_index = i;
        }
        if (windspeed[i] < min_speed) {
            min_speed = windspeed[i];
            min_index = i;
        }
    }

    
    double average = sum / 14.0;

    printf("\nAverage wind speed: %.2lf\n", average);
    printf("Day with highest wind speed: %d\n", max_index+1);
    printf("Day with lowest wind speed: %d\n", min_index+1);

    for (i = 0; i < 14; i++) {
        double difference = max_speed - windspeed[i];
        printf("Difference between highest wind speed and day %d's wind speed: %.2lf\n", i+1, difference);
    }

    return 0;
}
