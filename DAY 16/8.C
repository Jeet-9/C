#include <stdio.h>

int main() {
    char ch;
    int i, j;

    for (i = 0; i < 6; i++) {
        ch = 'F';
        for (j = 5; j >= i; j--) {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }

    return 0;
}