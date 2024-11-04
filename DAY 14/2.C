#include <stdio.h>

int main() {
    int sum = 0;

    printf("Calculating the sum of the first 10 positive integers:\n");

    for (int i = 1; i <= 10; i++) {
        sum += i;
        printf("Current sum: %d\n", sum);
        
        if (sum > 50) {
            printf("The sum has exceeded 50. Exiting the loop.\n");
            break;
        }
    }

    printf("Final sum: %d\n", sum);

    return 0;
}
