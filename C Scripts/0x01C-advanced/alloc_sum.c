// Program to calculate sum of numbers enterd by the user
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, sum = 0;
    int *ptr;

    printf("Enter first element to be added:\n");
    scanf("%d", &i);
    printf("Enter second element to be added:\n");
    scanf("%d", &j);
    ptr = malloc(sizeof(sum));
    if (ptr == NULL)
    {
        printf("Error! Memory not allocated!\n");
        return (-1);
    }
    sum = i + j;
    printf("The sum of %d + %d = %d\n", i, j, sum);
    free(ptr);
    return (0);
}