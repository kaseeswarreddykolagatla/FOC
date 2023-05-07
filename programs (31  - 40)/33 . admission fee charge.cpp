#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 55) {
        printf("Admission charge: $10.00\n");
    } else if (age >= 21 && age <= 54) {
        printf("Admission charge: $15.00\n");
    } else if (age >= 13 && age <= 20) {
        printf("Admission charge: $10.00\n");
    } else if (age >= 3 && age <= 12) {
        printf("Admission charge: $5.00\n");
    } else {
        printf("Admission charge: Free\n");
    }

    return 0;
}
