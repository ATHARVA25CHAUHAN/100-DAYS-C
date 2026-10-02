#include <stdio.h>

int main()
{
    int n;
    int nums[100];
    int i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int candidate = 0;
    int count = 0;

    for (i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
        }

        if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Verify candidate
    count = 0;

    for (i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
        {
            count++;
        }
    }

    if (count > n / 2)
    {
        printf("%d", candidate);
    }
    else
    {
        printf("-1");
    }

    return 0;
}
