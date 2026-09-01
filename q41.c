#include <stdio.h>
#include <math.h>
int main()
{
int n, first, last, digits = 0, middle, result;
scanf("%d", &n);
last = n % 10;
int temp = n;
while (temp >= 10)
{
temp /= 10;
digits++;
}
first = temp;
int power = pow(10, digits);
middle = (n % power) / 10;
result = last * power + middle * 10+ first;
printf("%d", result);
return 0;
}
