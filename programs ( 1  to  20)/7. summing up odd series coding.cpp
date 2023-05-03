#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of odd numbers to sum up: ");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i += 2) {
        sum += i;
    }
    printf("The sum of the first %d odd numbers is %d.\n", n, sum);
    return 0;
}
