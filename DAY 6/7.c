#include <stdio.h>

int main() {
    int x, y, result;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    result = (x + y) * 3;

    printf("Result of the formula (x + y) * 3: %d\n", result);

    return 0;
}
