#include <stdio.h>

int main() {
  int a, b, max;

  printf("Enter two integer numbers: ");
  scanf("%d %d", &a, &b);

  max = a;

  if (b > max) {
    max = b;
  }

  printf("The biggest number is %d\n", max);

  return 0;
}
