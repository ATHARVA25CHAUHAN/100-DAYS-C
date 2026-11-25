#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum TrafficLight signal;

    printf("Enter traffic light value (0-RED, 1-YELLOW, 2-GREEN): ");
    scanf("%d", (int *)&signal);

    switch(signal)
    {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;

        default:
            printf("Invalid traffic light value");
    }

    return 0;
}