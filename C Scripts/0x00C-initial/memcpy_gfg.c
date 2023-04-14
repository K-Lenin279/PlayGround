#include <stdio.h>
#include <string.h>

void *memcpy(void *to, const void *from, size_t numBytes);

int main(void)
{
    char str1[] = "Geeks";
    char str2[] = "Quiz";

    puts("str1 before memcpy:");
    puts(str1);

    /*Copies contents of str2 to str1*/
    memcpy(str1, str2, sizeof(str2));

    puts("\nstr1 after memcpy:");
    puts(str1);
    return (0);
}