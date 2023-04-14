#include <stdio.h>

int main(void)
{
    int num = 97;
    int *ptr = &num;

    *ptr = 98;
    printf("%d\n", *ptr);
    printf("%d\n", sizeof(*ptr));
    return (0);
}