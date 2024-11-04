#include <stdio.h>

void doubleArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        arr[i] *= 2; 
    }
}

int main() {
    int array[100], size, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    
    doubleArray(array, size);
    
    printf("Doubled array:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
