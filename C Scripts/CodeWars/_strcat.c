#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer1[40] = "computer";

    strcat(buffer1, "program");
    printf("buffer1 = %s\n", buffer1);
    return (0);
}