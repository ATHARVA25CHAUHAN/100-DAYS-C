#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;
    int found = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
            largest = a[i];
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] != largest)
        {
            second = a[i];
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("No second largest element");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] != largest && a[i] > second)
            second = a[i];
    }

    printf("%d", second);

    return 0;
}
