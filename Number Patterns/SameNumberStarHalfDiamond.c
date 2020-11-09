#include <stdio.h>

int main()
{
    int i,j,r, count1;
    int count = 0;
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    for(i=0; i<r; i++){
        if(i<r/2){
            count++;
            for(j=0; j<i; j++){
                if(j==i){
                    printf("%d",count);
                }
                else{
                    printf("%d*",count);
                }
            
        }
        printf("\n");
        }  

        else{
            for(j=0; j<r-i; j++){
                if(j==r-i-1){
                    printf("%d",count);
                }
                else{
                    printf("%d*",count);
                }
            }
        count--;
        printf("\n");
        }      
    }
    
} 