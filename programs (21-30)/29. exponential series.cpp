#include <stdio.h>

int main() {
    double x = 1.0;  
    double result = 1.0;  

    
    for (int n = 1; n <= 4; n++) {
        double term = 1.0;
        for (int i = 1; i <= n; i++) {
            term *= -x/i;
        }
        result += term;
    }

    printf("e^(-1) = %f\n", result);

    return 0;
}
