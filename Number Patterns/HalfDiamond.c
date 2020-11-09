#include <stdio.h>

int main()
{
    int i,j,r, count1;
    int count = 1;
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    for(i=0; i<r; i++){
        if(i<r/2){
            count1 = count+1;
            for(j=0; j<=i; j++){
            count++;
            printf("%d",count);
        }
        printf("\n");
        }  
        else{
            count = count1;    
            for(j=0; j<r-i; j++){
            printf("%d",count);
            count++;
            }
        count1 = count1 - (r-i)+1;
        printf("\n");
        }      
    }
    
} 