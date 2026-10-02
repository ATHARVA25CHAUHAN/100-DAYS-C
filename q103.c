#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int i;
    int totalSum = 0;
    int leftSum = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for (i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
        {
            printf("%d", i);
            return 0;
        }

        leftSum += arr[i];
    }

    printf("-1");

    return 0;
}
