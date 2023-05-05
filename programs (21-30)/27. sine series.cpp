#include <stdio.h>
#include <math.h>

int main()
{
    double x, sum = 0.0, term = 1.0, sign = 1.0;
    int n = 1, fact = 1;
    
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    
    while(fabs(term) > 1e-6) // while the absolute value of the term is greater than a small threshold
    {
        sum += term; // add the current term to the sum
        n += 2; // increment the term number by 2
        fact *= n * (n-1); // compute the factorial of the term number
        sign = -sign; // flip the sign for the next term
        term = sign * pow(x, n) / fact; // compute the current term
    }
    
    printf("sin(%lf) = %lf", x, sum);
    
    return 0;
}
