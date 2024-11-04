#include <stdio.h>

int main() {
    float side, perimeter;

    // Input side length of the square
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);

    // Calculate perimeter
    perimeter = 4 * side;

    // Output the perimeter
    printf("Perimeter of the square: %.2f\n", perimeter);

    return 0;
}
