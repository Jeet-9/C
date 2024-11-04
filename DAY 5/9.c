#include <stdio.h>

int main() {
    float a, b, result;
    
    printf("Enter the values of a and b: ");
    scanf("%f %f", &a, &b);
    
    result = (a + b) * (a + b) + (a + b) * (a + b);
    
    printf("Result: %.2f\n", result);
    
    return 0;
}
