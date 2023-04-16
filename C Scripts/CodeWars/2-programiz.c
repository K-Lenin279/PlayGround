#include <stdio.h>

int main(void)
{
    int i, j, sum;

    printf("Enter first number(s): ");
    scanf("%d", &i);
    printf("Enter second number(s): ");
    scanf("%d", &j);

    sum = i + j;
    printf("The sum of your values is: %02d\n", sum);
    return (0);
}