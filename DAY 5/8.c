#include <stdio.h>

int main() {
    float num1, num2, num3, num4;
    int sum;
    
    printf("Enter four float numbers: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
    
    sum = (int)(num1 + num2 + num3 + num4);
    
    printf("Sum: %d\n", sum);
    
    return 0;
}
