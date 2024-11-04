#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf("   ");
        }
        for (int j = rows - i; j >= 1; j--) {
            printf("%2d ", j);
        }
        printf("\n");
    }

    return 0;
}
