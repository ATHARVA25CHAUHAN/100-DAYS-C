#include <stdio.h>
int main()
{
int n, i;
float sum = 0.0;
scanf("%d", &n);
int num = 1, den = 2;
for (i = 1; i <= n; i++)
{
sum += (float)num / den;
num += 2;
den += 2;
}
printf("%.2f", sum);
return 0;
}
