#include <stdio.h>

void squareElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * arr[i]; 
    }
}

int main() {
    int size;
    
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int array[size];
    
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }
    
    squareElements(array, size);
    
    printf("The squares are: ");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}
