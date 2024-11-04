#include <stdio.h>

int main() {
    float grade1, grade2, grade3;
    float average;

    // Taking input from the user
    printf("Enter grade 1: ");
    scanf("%f", &grade1);
    
    printf("Enter grade 2: ");
    scanf("%f", &grade2);
    
    printf("Enter grade 3: ");
    scanf("%f", &grade3);

    // Calculating the average
    average = (grade1 + grade2 + grade3) / 3.0;

    // Printing the average
    printf("The average of the three grades is: %.2f\n", average);

    return 0;
}
