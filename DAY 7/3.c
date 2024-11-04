#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the a : ");
    scanf("%f", &a);

    printf("Enter the b : ");
    scanf("%f", &b);

    c = 180.0 - a - b;

    printf("Third angle: %.2f\n", c);

    return 0;
}