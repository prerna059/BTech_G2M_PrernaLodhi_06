#include<stdio.h>
#include<math.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0)
        {
            printf("Not leap year");
         }
         else {
             printf("Leap year");
         }
     }
    else{
        printf("Not leap year");
    }
    return 0;
}