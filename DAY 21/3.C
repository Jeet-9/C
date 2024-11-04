#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter any string: ");
    scanf("%[^\n]", str); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') { 
            str[i] = str[i] + 32; 
        } else if (str[i] >= 'a' && str[i] <= 'z') { 
            str[i] = str[i] - 32; 
        }
    }

    printf("Toggle case string: %s\n", str);

    return 0;
}
