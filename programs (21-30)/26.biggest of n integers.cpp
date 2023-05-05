#include <stdio.h>

int main() {
   int n, i, largest;

   printf("Enter the value of n: ");
   scanf("%d", &n);

   printf("Enter the 1st integer: ");
   scanf("%d", &largest);

   for (i = 2; i <= n; i++) {
      int num;
      printf("Enter the %dth integer: ", i);
      scanf("%d", &num);

      if (num > largest) {
         largest = num;
      }
   }

   printf("The largest integer is: %d", largest);

   return 0;
}
