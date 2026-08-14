#include <stdio.h>

int main()
{
  int a = 18 , b = 7, temp;

   temp = a;
   a = b;
   b = temp;

   printf("After swap: %d %d" , a , b);
   return 0;
}
