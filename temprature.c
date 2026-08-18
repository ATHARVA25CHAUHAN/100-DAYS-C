#include <stdio.h>

int main()
{
  float celsius = 0;
  float fahrenheit;

  fahrenheit = (celsius * 9 / 5) + 32;

  printf("Fahrenheit=%.0f", fahrenheit);

  return 0;
}
