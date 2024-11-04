#include <stdio.h>

int main() {
    float side1, side2, side3, perimeter;

    // Input lengths of the sides of the triangle
    printf("Enter the length of side 1 of the triangle: ");
    scanf("%f", &side1);
    printf("Enter the length of side 2 of the triangle: ");
    scanf("%f", &side2);
    printf("Enter the length of side 3 of the triangle: ");
    scanf("%f", &side3);

    // Calculate perimeter
    perimeter = side1 + side2 + side3;

    // Output the perimeter
    printf("Perimeter of the triangle: %.2f\n", perimeter);

    return 0;
}
