#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of cross: ");
    scanf("%d", &size);
    if(size<=2){
        printf("Invalid number.");
        return 1;
    }
    for(int i=1; i<=size; i++)
    {
        for(int j=1;j<=size; j++)
        {
            if(j==i || j==size-i+1){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;

}
