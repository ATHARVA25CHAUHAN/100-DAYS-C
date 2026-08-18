#include <stdio.h>

int main()
{
float a, b, c;

printf("Enter three sides of triangle: ");
scanf("%f %f %f", &a, &b, &c);

if (a <= 0 || b <= 0 || c <= 0)
{
printf("Invalid triangle\n");
}
else if (a + b <= c || a + c <= b || b + c <= a)
{
printf("Invalid triangle\n");
}
else if (a == b && b ==c)
{
printf("Equilateral traingle\n");
}
else if (a == b || b == c || a == c)
{
printf("Isoceles triangle\n");
}
else
{
printf("Scalene triangle\n");
}
return 0;
}
