#include<stdio.h>
int main()
{
    int age;

    printf("Enter Your Age:");
    scanf("%d",&age);

    if (age >= 18){
        printf("You are Eligible for vote");
    } else {
        printf(" You are not Eligible for vote");
    }
    return 0;
}