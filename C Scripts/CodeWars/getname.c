#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[21];

    printf("Enter your name:");
/*stdin refers to standard input. Fgets is used to display a whole line of user input unlike scanf which displays the first word before a space*/
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
}