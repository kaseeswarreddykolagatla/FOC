#include <stdio.h>
#include <math.h>

double cos_series(double x, int n) {
    double result = 1.0;
    double term = 1.0;
    int i;

    for (i = 1; i <= n; i++) {
        term *= -x * x / ((2 * i - 1) * 2 * i);
        result += term;
    }

    return result;
}

int main() {
    double x;
    int n;

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter the number of terms to compute: ");
    scanf("%d", &n);

    printf("cos(%lf) = %lf\n", x, cos_series(x, n));
    
    return 0;
}
