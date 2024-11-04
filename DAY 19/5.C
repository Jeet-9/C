#include <stdio.h>

int main() {
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int product = 1;
    printf("Even numbers within the array:\n");
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d\n", arr[i]);
            product *= arr[i];
        }
    }
    printf("Product of all even numbers: %d\n", product);
    return 0;
}