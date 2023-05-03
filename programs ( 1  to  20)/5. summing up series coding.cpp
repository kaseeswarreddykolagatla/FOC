#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    printf("The sum of the series 1 + 2 + ... + %d = %d", n, sum);
    
    return 0;
}
