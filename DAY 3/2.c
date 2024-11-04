#include <stdio.h>

int main() {
    double length, width, area, perimeter;
    
    printf("Enter length and width of the rectangle: ");
    scanf("%lf %lf", &length, &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area: %lf\n", area);
    printf("Perimeter: %lf\n", perimeter);

    return 0;
}
