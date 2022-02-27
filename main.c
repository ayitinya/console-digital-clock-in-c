#include <stdio.h>
#include <stdlib.h>

void main()
{
    char days[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    int hours;
    int minutes;
    int seconds;
    int day;

    printf("enter the format int the form HH:MM:SS\n");

    printf("enter the current time(hours): ");
    scanf("%d", &hours);

    printf("enter the current time(minutes): ");
    scanf("%d", &minutes);

    printf("enter the current time(seconds): ");
    scanf("%d", &seconds);

    printf("enter the day of the week here: ");
    scanf("%d", &day);

    int running = 1;
    while (running == 1)
    {
        while (hours <= 24)
        {
            while (minutes < 60)
            {
                while (seconds < 60)
                {

                    sleep(1);
                    system("clear");
                    printf("%s\n", days[day - 1]);
                    printf("HH:MM:SS\n");
                    seconds++;
                    printf("%d:%d:%d\n", hours, minutes, seconds);
                }
                minutes++;
                seconds = 0;
            }
            hours++;
        }
        {
            minutes, hours, seconds = 0;
            if (day == 7)
            {
                day = 1;
            }
            else
            {
                day++;
            }
        }
    }
}
