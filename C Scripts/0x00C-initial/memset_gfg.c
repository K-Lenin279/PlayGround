#include <stdio.h>
#include <string.h>

void *memset(void *ptr, int x, size_t n);

int main(void)
{
    char str[50] = "Geeks for geeks is for programming geeks";

    printf("Before memset: %s\n", str);

    /*Fill 8 charracters starting from str[15] with '-'*/
    memset(str + 15, '-', 8 * sizeof(char));

    printf("After memset: %s\n", str);
    return (0);
}