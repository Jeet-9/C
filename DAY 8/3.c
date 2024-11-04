#include<stdio.h>
int main()
{
    int a;

    printf("Enter the number:");
    scanf("%d",&a);

     if (a > 0) {
        printf("Positive.\n");
    } else if (a < 0) {
        printf("Negative.\n");
    } else {
        printf("Neutral.\n");
    }
    return 0;
}