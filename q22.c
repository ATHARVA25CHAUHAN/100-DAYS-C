#include <stdio.h>
int main()
{
float cp, sp, profit, loss, percentage;
printf("Enter cost price: ");
scanf("%f", &cp);
printf("Enter selling price: ");
scanf("%f", &sp);

if (cp <= 0)
{
printf("Invalid cost price\n");
}
else if (sp > cp)
{
profit = sp - cp;
percentage = (profit / cp) * 100;

printf("Profit = %.2f\n", profit);
printf("Profit Percentage = %.2f%%\n", percentage);
}
else if (sp < cp)
{
loss = cp - sp;
percentage = (loss / cp) * 100;
printf("Loss = %.2f\n", percentage);
printf("Loss percentage = %.2f%%\n", percentage);
}
else
{
printf("No profit No loss\n");
}
return 0;
}
