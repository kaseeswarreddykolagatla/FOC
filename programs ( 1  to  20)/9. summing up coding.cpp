#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += (i * 10 + 2);
    }
    printf("The sum of the series is %d\n", sum);
    return 0;
}
