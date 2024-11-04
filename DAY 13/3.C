#include <stdio.h>

int main() {
    int num;
    int multiple = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Please enter a non-zero number.\n");
        return 1; 
    }

    printf("First 10 multiples of %d are:\n", num);

    do {
        printf("%d\n", num * multiple);
        multiple++;
    } while (multiple <= 10);

    return 0;
}
