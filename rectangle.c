#include <stdio.h>

int main()
{
  int length = 3;
  int breadth = 7;
  int area, perimeter;

  area = length * breadth;
  perimeter = 2 * (length + breadth);

  printf("Area=%d, Perimeter=%d\n", area, perimeter);

  return 0;
}
