#include <stdio.h>
#include<math.h>
int main() 
{
  int a;
  int b;
  int c;
  printf("Enter the first number : \n");
  scanf("%d",&a);
  printf("Enter the second number : \n");
  scanf("%d",&b);
  printf("Enter the third numbers: \n");
  scanf("%d",&c);
  if(a>b && a>c)
  {
    printf("The largest number is %d",a);
  }
  else if(b>a && b>c)
  {
    printf("The largest number is %d",b);
  }
 else 
 {
  printf("The largest number is %d",c);
 }

  return 0;
}
  