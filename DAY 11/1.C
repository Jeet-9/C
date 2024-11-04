#include <stdio.h>

int main() {
    int length, width;

    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the width: ");
    scanf("%d", &width);

    if (length <= 0 || width <= 0) {
        printf("Invalid dimensions! Length and width must be positive integers.\n");
    } else {
        if (length == width) {
            printf("It's a square.\n");
        } else {
            printf("It's a rectangle.\n");
        }
    }

    return 0;
}
