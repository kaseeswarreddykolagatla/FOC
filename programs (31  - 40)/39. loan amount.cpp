#include <stdio.h>

int main() {
    float loan_amount = 3000;
    float monthly_payment = 85;
    float monthly_interest_rate = 0.01;
    float interest, principal, balance = loan_amount;
    int month_count = 0;

    printf("Month\tInterest\tPrincipal\tBalance\n");

    while (balance > 0) {
        interest = balance * monthly_interest_rate;
        if (balance + interest < monthly_payment) {
            monthly_payment = balance + interest;
        }
        principal = monthly_payment - interest;
        balance -= principal;
        month_count++;
        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", month_count, interest, principal, balance);
    }

    printf("\nIt will take %d years and %d months to pay the loan back.\n", month_count / 12, month_count % 12);
    printf("The total interest paid will be $%.2f.\n", balance + loan_amount);

    return 0;
}
