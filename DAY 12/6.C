#include <stdio.h>

int main() {
    int num = 30;
    while (num <= 40) {
        if (num % 2 != 0) {
            printf("%d ", num);
        }
        num++;
    }
    return 0;
}
