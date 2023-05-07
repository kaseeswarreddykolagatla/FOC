#include <stdio.h>

int main() {
  float original_price, sale_price;
  int i;

  printf("Enter the original price of the product: ");
  scanf("%f", &original_price);

  sale_price = original_price;

  for (i = 1; i <= 5; i++) {
    sale_price = sale_price * 0.9;
    printf("Sale price on day %d is $%.2f\n", i, sale_price);
  }

  return 0;
}
