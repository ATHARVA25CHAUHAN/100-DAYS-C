#include <stdio.h>
#include <math.h>
int main()
{
int n, temp, digit , digits = 0;
int sum = 0;
scanf("%d", &n);
temp = n;
while (temp != 0)
{
digits++;
temp /= 10;
}
temp = n;
while (temp != 0)
{
digit = temp % 10;
sum += pow(digit, digits);
temp /=10;
}
if (sum == n)
printf("Armstrong Number");
else 
printf("Not an Armstrong Number");
return 0;
} 
