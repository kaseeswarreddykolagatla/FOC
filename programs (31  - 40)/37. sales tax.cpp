#include <stdio.h>

int main() {
    float base_price, accessory_price, total_price, sales_tax;
    int num_accessories, i;

    
    total_price = 0;

    
    printf("Enter base price of the car: ");
    scanf("%f", &base_price);


    total_price += base_price;

    
    printf("Enter number of accessories: ");
    scanf("%d", &num_accessories);

    
    for (i = 1; i <= num_accessories; i++) {
        printf("Enter price of accessory %d: ", i);
        scanf("%f", &accessory_price);
        total_price += accessory_price;
    }

    
	  sales_tax = total_price * 0.07;
    total_price += sales_tax;

    
    printf("Total cost of the car is $%.2f\n", total_price);

    return 0;
}
