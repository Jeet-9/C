#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    while (N >= 1) {
        printf("%d ", N);
        N--;
    }
    return 0;
}
