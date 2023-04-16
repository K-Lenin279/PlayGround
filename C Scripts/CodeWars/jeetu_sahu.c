#include <stdio.h>

int main(void)
{
    int i = 0, n, sum = 0, num;

    printf("\nHow many numbers do you want?\n");
    scanf("%d", &n);

    printf("\nEnter elements one by one\n");
    do
    {
        scanf("%d", &num);
        sum += num;
        i++;
    } while (i < n);

    printf("\nSum of given numbers: %d\n", sum);

    return (0);
}