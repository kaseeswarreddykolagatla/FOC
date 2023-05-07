#include <stdio.h>

int main() {
  int num_people, base_price;
  float discount, total_price;

  
  printf("Enter the number of people staying in the room: ");
  scanf("%d", &num_people);


  switch (num_people) {
    case 2:
      base_price = 85;
      break;
    case 3:
      base_price = 90;
      break;
    case 4:
      base_price = 95;
      break;
    default:
      base_price = 95 + (num_people - 4) * 6;
      break;
  }

  
  printf("Is the stay for company business? (y/n) ");
  char is_business;
  scanf(" %c", &is_business);
  printf("Is the customer over 60 years of age? (y/n) ");
  char is_senior;
  scanf(" %c", &is_senior);

  
  if (is_business == 'y') {
    discount = 0.2;
  } else if (is_senior == 'y') {
    discount = 0.15;
  } else {
    discount = 0;
  }

  
  total_price = base_price - (base_price * discount);


  printf("The total cost of the room is $%.2f\n", total_price);

  return 0;
}
