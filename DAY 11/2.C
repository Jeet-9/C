#include <stdio.h>

int main() {
    int choice;
    float price;
    char* coffee_name;

    printf("Coffee Menu:\n");
    printf("1. Espresso - $2.50\n");
    printf("2. Latte - $3.00\n");
    printf("3. Cappuccino - $3.50\n");
    printf("4. Americano - $2.75\n");
    
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            coffee_name = "Espresso";
            price = 2.50;
            break;
        case 2:
            coffee_name = "Latte";
            price = 3.00;
            break;
        case 3:
            coffee_name = "Cappuccino";
            price = 3.50;
            break;
        case 4:
            coffee_name = "Americano";
            price = 2.75;
            break;
        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
            return 1; 
    }

    printf("You have selected: %s\n", coffee_name);
    printf("Price: $%.2f\n", price);

    return 0;
}
