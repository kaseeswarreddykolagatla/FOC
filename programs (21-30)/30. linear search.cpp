#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 20;

    int index = linearSearch(arr, n, key);

    if (index == -1) {
        printf("Key not found.\n");
    } else {
        printf("Key found at index %d.\n", index);
    }

    return 0;
}
