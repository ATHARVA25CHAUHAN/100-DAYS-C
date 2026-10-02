#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;

    long long x = (long long)sqrt(total);

    if (x * x == total)
    {
        printf("%lld", x);
    }
    else
    {
        printf("-1");
    }

    return 0;
}
