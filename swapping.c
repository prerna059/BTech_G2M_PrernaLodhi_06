#include <stdio.h>
int main() 
{
  int a = 5;
  int b = 10;
  int c = a;
   a=b;
   b=c;
  printf("The value of a and b are %d and %d respectively.",a,b);
  return 0;
}
  