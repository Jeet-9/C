#include <stdio.h>

int main() {
    int count = 0;
    int num = 1;

    printf("The first 5 numbers divisible by 8 are:\n");

    while (count < 5) {
        if (num % 8 == 0) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }

    return 0;
}
