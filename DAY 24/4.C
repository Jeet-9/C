#include <stdio.h>
 factorial(int num);

 factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int num;
     result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = factorial(num);
    printf("Factorial of %d is %llu\n", num, result);

    return 0;
}
