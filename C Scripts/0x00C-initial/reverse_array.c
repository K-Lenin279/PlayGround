#include <stdio.h>
#include <string.h>

int main(void)
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 9; i > -1; --i)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return (0);
}