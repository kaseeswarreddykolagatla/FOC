#include <stdio.h>

int main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    
    if (x > 0) {
        printf("%d is positive", x);
    } else if (x < 0) {
        printf("%d is negative", x);
    } else {
        printf("%d is neither positive nor negative", x);
    }
    return 0;
}
