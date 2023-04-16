#include <stdio.h>
#include <string.h>

void comp_array()
{
    char string1[] = "Jerry";
    char string2[] = "Ferry";
    int i, j, k;

    i = strcmp(string1, "Jerry");
    j = strcmp(string1, string2);
    k = strcmp(string1, "Jerry boy");
    printf("%d\n%d\n%d\n", i, j, k);
}

int main(void)
{
    comp_array();
    return (0);
}