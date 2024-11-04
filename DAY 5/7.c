#include <stdio.h>

int main() {
    int x, y, result;
    
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);
    
    result = (x + y) * 3;
    
    printf("Result: %d\n", result);
    
    return 0;
}
