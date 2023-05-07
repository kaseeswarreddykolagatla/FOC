#include <stdio.h>

int main() {
    int usage;
    float bill;
    
    printf("Enter the cubic feet of water used: ");
    scanf("%d", &usage);
    
    if (usage <= 1000) {
        bill = 15.00;
    }
    else if (usage <= 2000) {
        bill = 15.00 + (usage - 1000) * 0.0175;
    }
    else if (usage <= 3000) {
        bill = 32.50 + (usage - 2000) * 0.02;
    }
    else {
        bill = 52.50 + (usage - 3000) * 0.025;
    }
    
    printf("Your water bill is $%.2f\n", bill);
    
    return 0;
}
