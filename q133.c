#include <stdio.h>

enum Month
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main()
{
    enum Month m;

    printf("Enter month number (1-12): ");
    scanf("%d", (int *)&m);

    switch(m)
    {
        case JANUARY:
            printf("January has 31 days.");
            break;

        case FEBRUARY:
            printf("February has 28 or 29 days.");
            break;

        case MARCH:
            printf("March has 31 days.");
            break;

        case APRIL:
            printf("April has 30 days.");
            break;

        case MAY:
            printf("May has 31 days.");
            break;

        case JUNE:
            printf("June has 30 days.");
            break;

        case JULY:
            printf("July has 31 days.");
            break;

        case AUGUST:
            printf("August has 31 days.");
            break;

        case SEPTEMBER:
            printf("September has 30 days.");
            break;

        case OCTOBER:
            printf("October has 31 days.");
            break;

        case NOVEMBER:
            printf("November has 30 days.");
            break;

        case DECEMBER:
            printf("December has 31 days.");
            break;

        default:
            printf("Invalid month number.");
    }

    return 0;
}