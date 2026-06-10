#include<stdio.h>
int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    if(size<=0){
        printf("Invalid number.");
        return 1;
    }
   
    for(int i=1; i<=size; i++)
    {
        for(int j=1;j<=size; j++)
       if(j<=size-i) {
            printf(" ");
           
        }
        else{
            printf("*");
        }
        
        printf("\n");
    }
    return 0;

}
