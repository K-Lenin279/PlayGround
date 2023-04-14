#include <stdio.h>
#include <unistd.h>
#include <windows.h>

int main(void)
{
    int hr, min, sec;
    int d = 1; /*This will be used to add a delay. The delay is in seconds*/

    for (hr = 0; hr < 24; hr++)
    {
        for (min = 0; min < 60; min++)
        {
            for (sec = 0; sec < 60; sec++)
            {
                printf("Clock:\n");
                printf("%02d:%02d:%02d\n", hr, min, sec);
                sleep(d);
                system("cls"); /*This clears the screen*/
            }
        }
    }
    return (0);
}