#include <stdio.h>

void countFrequency(char *str) {
    int freq[256] = {0}; 
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    printf("Frequency of each letter:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("%c => %d\n", i, freq[i]);
        }
    }
}
int main() {
    char str[100];
    printf("Enter any string: ");
    scanf("%[^\n]", str);

    countFrequency(str);

    return 0;
}