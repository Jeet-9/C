#include <stdio.h>

int main() {
    int sum = 0, num = 1;
    while (num <= 5) {
        sum += num;
        num++;
    }
    printf("Sum of numbers from 1 to 5 is: %d\n", sum);
    return 0;
}
