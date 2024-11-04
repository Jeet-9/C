#include <stdio.h>
int isPalindrome(char *str) {
    int len = 0;
    while (str[len] != '\0')
        len++;

    int start = 0;
    int end = len - 1;
    
    while (start < end) {
        if (str[start] != str[end])
            return 0; 
        start++;
        end--;
    }
    return 1; 
}
int main() {
    char str[100];
    printf("Enter any string: ");
    scanf("%s", str);

    if (isPalindrome(str))
        printf("Given string is a Palindrome.\n");
    else
        printf("Given string is not a Palindrome.\n");
    return 0;
}
