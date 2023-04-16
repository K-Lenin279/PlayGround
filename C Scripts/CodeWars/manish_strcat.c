#include <stdio.h>
#include <string.h>

int main(void)
{
    char string1[] = "Hello World";
    char string2[] = "\tIt is I.";

    strcat(string1, string2);
    printf("Concated string: %s\n", string1);
    return (0);
}