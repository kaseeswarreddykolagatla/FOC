#include <stdio.h>

int main() {
  int a, b, c, temp;

  printf("Enter the value of a: ");
  scanf("%d", &a);
  printf("Enter the value of b: ");
  scanf("%d", &b);
  printf("Enter the value of c: ");
  scanf("%d", &c);

  
  temp = a;
  a = b;
  b = c;
  c = temp;

  printf("\nAfter swapping:\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);

  return 0;
}
