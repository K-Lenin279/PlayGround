#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    char name[] = "Zendaya the badass";

    printf("The star of KC Undercover is %s\n", name);
    printf("The size of name array is: %d\n", sizeof(name) / sizeof(name[0]));
    printf("The size of name[0] array is: %d\n", sizeof(name[0]));
    printf("The size of name[ch] array is: %d\n", sizeof(name));
    printf("%f\n", pow(2, 7));
    printf("%f\n", sqrt(225));
    /*ceil refers to ceiling. It's purpose is to round off the given number (upwards)*/
    printf("%lf\n", ceil(36.279));
    /*floor does the opposte of ceiling and rounds off the number down*/
    printf("%f\n", floor(36.674));
    return (0);
}