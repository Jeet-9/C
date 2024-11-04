#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter any string: ");
    scanf("%[^\n]", str); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') { 
            str[i] = str[i] + 32; 
        }
    }

    printf("Lowercase string: %s\n", str);

    return 0;
}
