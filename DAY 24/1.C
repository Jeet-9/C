#include <stdio.h>
float Product(float rate, float price);

float Product(float rate, float price) {
    return rate * price;
}

int main() {
    float rate, price, product;

    printf("Enter the rate: ");
    scanf("%f", &rate);
    printf("Enter the price: ");
    scanf("%f", &price);

    product = Product(rate, price);
    printf("Product (Rate * Price): %.2f\n", product);

    return 0;
}
