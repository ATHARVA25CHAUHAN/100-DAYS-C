#include <stdio.h>
int main()
{
long long binary, place = 1;
long long result = 0;
int digit;
scanf("%lld", &binary);
while (binary != 0)
{
digit = binary % 10;
if (digit == 0)
result += 1 * place;
else
result += 0 * place;
place *= 10;
binary /= 10;
}
printf("%lld", result);
return 0;
}
