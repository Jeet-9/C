#include <stdio.h>

int main() {
    int num = 1;

    printf("Numbers between 1 and 50 excluding multiples of 5:\n");

    while (num <= 50) {
        if (num % 5 == 0) {
            num++; 
            continue; 
        }

        printf("%d\n", num);
        num++;
    }

    return 0;
}
