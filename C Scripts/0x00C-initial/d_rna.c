#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "GCAT";

    memset(str + 3, 'U', sizeof(char));
    printf("%s\n", str);
    return (0);
}