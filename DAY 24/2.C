#include <stdio.h>
int square(int num);

int square(int num) {
    return num * num;
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = square(num);

    printf("Square of %d is %d\n", num, result);

    return 0;
}
