#include <stdio.h>

int main() {
    int x = 6;
    int y = 9;

    int *ptr_x = &x; 
    int *ptr_y = &y; 

    printf("Address of x: %p  Value: %d\n", (void*)ptr_x, *ptr_x);
    printf("Address of y: %p  Value: %d\n", (void*)ptr_y, *ptr_y);

    return 0;
}
