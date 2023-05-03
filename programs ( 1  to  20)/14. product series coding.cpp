#include <stdio.h>

int main() {
    int num, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %d", num, factorial);
    return 0;
}
