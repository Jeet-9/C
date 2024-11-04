#include <stdio.h>

int main() {
    int rows = 5;
    int spaces, stars;

    for (int i = 0; i < rows; i++) {
        for (spaces = 0; spaces < rows - i - 1; spaces++) {
            printf("   ");
        }
        for (stars = 0; stars < 2 * i + 1; stars++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
