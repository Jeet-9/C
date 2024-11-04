#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i, j;
    
    for (i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }
    
    for (j = 0; j < size2; j++) {
        result[size1 + j] = arr2[j];
    }
}

int main() {
    int arrayA[100], arrayB[100], arrayC[200]; 
    int sizeA, sizeB, sizeC, i;
    
    printf("Enter array A's size: ");
    scanf("%d", &sizeA);
    
    printf("Enter array A's elements:\n");
    for (i = 0; i < sizeA; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arrayA[i]);
    }
    
    printf("\nEnter array B's size: ");
    scanf("%d", &sizeB);
    
    printf("Enter array B's elements:\n");
    for (i = 0; i < sizeB; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &arrayB[i]);
    }
    
    mergeArrays(arrayA, sizeA, arrayB, sizeB, arrayC);
    sizeC = sizeA + sizeB;
    
    printf("\nArray C is: ");
    for (i = 0; i < sizeC; i++) {
        printf("%d", arrayC[i]);
        if (i < sizeC - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}
