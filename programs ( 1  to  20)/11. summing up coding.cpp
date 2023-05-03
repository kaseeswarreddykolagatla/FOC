#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += 11 * i;
    }
    printf("Sum of the series is %d", sum);
    return 0;
}
