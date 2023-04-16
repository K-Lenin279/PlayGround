#include <stdio.h>

int main(void)
{
    float num1, num2, product;

    printf("Enter your first value(s):");
    scanf("%f", &num1);
    printf("Enter your second value(s):");
    scanf("%f", &num2);

    product = num1 * num2;
    printf("Your product is: %.4f\n", product);
    return (0);
}