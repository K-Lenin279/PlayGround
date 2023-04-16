#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[] = "This is a string\0";
    char *ptr = arr;

    while (*ptr != '\0')
    {
        printf("%s\n", arr);
        ptr++;
    }
    printf("%s\n", arr);
    printf("%p\n", ptr);
    return (0);
}