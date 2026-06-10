#include<stdio.h>
int main(){
    int size, height;
    printf("Enter the breadth: ");
    scanf("%d", &size);
    printf("Enter the height:");
    scanf("%d", &height);
    if(size<=0){
        printf("Invalid number.");
        return 1;
    }
   
    for(int i= height; i>=1; i-- )
    {
        for(int j=1;j<=size+i-1; j++){
          if(j<=i-1){
            printf(" ");}
            else{
          printf("*");
        } 
    }
        printf("\n");
    }
    return 0;

}
