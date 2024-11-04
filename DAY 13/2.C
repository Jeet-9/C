#include <stdio.h>

int main() {
    int num = 1; 
    int product = 1; 

    do {
        printf("%d\n", num); 
        product *= num; 
        num++; 
    } while (num <= 10); 

    printf("Product of numbers from 1 to 10: %d\n", product);

    return 0;
}
