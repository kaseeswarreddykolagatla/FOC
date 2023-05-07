#include <stdio.h>
#include <stdlib.h>

int main() {
    int original, sum, check_digit, new_num;
    
    
    printf("Enter a four-digit number: ");
    scanf("%d", &original);
    
    
    sum = (original / 1000) + ((original / 100) % 10) + ((original / 10) % 10) + (original % 10);
    

    if (sum % 2 == 0) {
        check_digit = 0;
    } else {
        check_digit = 1;
    }
    
    
    new_num = (original * 10) + check_digit;
    
    
    printf("Original number: %d\nNew number: %d\n", original, new_num);
    
    
    original = 47371;
    sum = (original / 1000) + ((original / 100) % 10) + ((original / 10) % 10) + (original % 10);
    if (sum % 2 == 0) {
        check_digit = 0;
    } else {
        check_digit = 1;
    }
    new_num = (original * 10) + check_digit;
    printf("Original number: %d\nNew number: %d\n", original, new_num);
    
    original = 4631;
    sum = (original / 1000) + ((original / 100) % 10) + ((original / 10) % 10) + (original % 10);
    if (sum % 2 == 0) {
        check_digit = 0;
    } else {
        check_digit = 1;
    }
    new_num = (original * 10) + check_digit;
    printf("Original number: %d\nNew number: %d\n", original, new_num);
    
    
    return 0;
}
