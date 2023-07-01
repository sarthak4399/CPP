#include <stdio.h>

#define max1 10

int input[max1];
int linearSearch(int i, int key) {
    if (i >= max1) {
        return -1; // Base case: key not found in the array
    }
    
    if (input[i] == key) {
        return i; // Key found at index i
    } else {
        return linearSearch(i + 1, key); // Recursively search in the next index
    }
}
int main() {
    int key;

    printf("Enter %d elements: ", max1);
    for (int i = 0; i < max1; i++) {
        scanf("%d", &input[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    int result = linearSearch(0, key);
    if (result == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }
    return 0;
}
