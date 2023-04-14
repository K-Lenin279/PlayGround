#include <stdio.h>
#include <string.h>

// Function to replace a string with another
int main(void)
{
    char str1[] = "Playlist to uplift individuals";
    char str2[] = "individuals";
    char *s;

    s = strstr(str1, str2);
    if (s)
    {
        strcpy(s, "Moods");
        printf("%s\n", str1);
    }
    else
    {
        printf("No Match Found!\n");
    }
    return (0);
}