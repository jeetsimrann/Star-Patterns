#include <stdio.h>

int main()
{
    int i,j,r,count;
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    for(i=0; i<r; i++){
        count= r*(r-i-1);
        for(j=0; j<r; j++){
           if(j==r-1){
               count++;
            printf("%d",count);
           }
           else{
            count++;
            printf("%d*",count);
           }           
        }    
        printf("\n");
    }
}
