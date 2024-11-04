#include <stdio.h>
void swap(int *ptr_x, int *ptr_y) {
    int temp = *ptr_x;
    *ptr_x = *ptr_y;
    *ptr_y = temp;
}

int main() {
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("\nBefore swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    swap(&x, &y);

    printf("\nAfter swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}
