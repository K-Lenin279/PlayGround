#include <stdio.h>
#include <string.h>

void *memset(void *ptr, int x, size_t n);

void print_array(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int n = 10;
    int arr[n];

    /*Fill whole array with 0*/
    memset(arr, -1, n * sizeof(arr[0]));
    printf("After memset:\n");
    print_array(arr, n);
    return (0);
}