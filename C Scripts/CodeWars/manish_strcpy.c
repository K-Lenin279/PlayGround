#include <stdio.h>
#include <string.h>

int main(void)
{
    char string1[] = "Manish";
    char string2[20];

    strcpy(string2, string1);
    printf("Source string %s\n", string1);
    printf("Target string %s\n", string2);
    return (0);
}