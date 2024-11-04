#include <stdio.h>

int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

void findLeapYears(int start, int end, int leapYears[], int *count) {
    int i;
    *count = 0;

    for (i = start; i <= end; i++) {
        if (isLeapYear(i)) {
            leapYears[*count] = i;
            (*count)++;
        }
    }
}

int main() {
    int start, end;
    
    printf("Enter the first number: ");
    scanf("%d", &start);
    
    printf("Enter the second number: ");
    scanf("%d", &end);
    
    int leapYears[100]; 
    
    int count; 
    findLeapYears(start, end, leapYears, &count);
    
    printf("The array is: ");
    for (int i = 0; i < count; i++) {
        printf("%d", leapYears[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}
