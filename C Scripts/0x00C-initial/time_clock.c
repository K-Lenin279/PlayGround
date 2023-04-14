#include <stdio.h>
#include <unistd.h>
/*#include <time.h>*/

int main(void)
{
    int hr, min, sec;

    hr = 0;
    while (hr < 24)
    {
        min = 0;
        while (min < 60)
        {
            sec = 0;
            while (sec < 60)
            {
                printf("%02d:%02d:%02d\n", hr, min, sec);
                sleep(1);
                sec++;
            }
            min++;
        }
        hr++;
    }

    return (0);
}