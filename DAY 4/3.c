#include <stdio.h>

int main() {
    float num1, num2, num3, num4, sum, result;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);
    printf("Enter the fourth number: ");
    scanf("%f", &num4);

    sum = num1 + num2 + num3 + num4;

    result = (sum * 5) / 2;

    printf("Sum: %.2f\n", sum);
    printf("Result after multiplying by 5 and dividing by 2: %.2f\n", result);

    return 0;
}
