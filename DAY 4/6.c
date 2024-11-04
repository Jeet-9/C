#include <stdio.h>

int main() {
    int number;
    const int multiplier = 5;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = number * multiplier;
    printf("The result after multiplying %d by %d is: %d\n", number, multiplier, result);

    return 0;
}
