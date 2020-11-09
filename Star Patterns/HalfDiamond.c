#include <stdio.h>

int main()
{
    int i,j,r;
    
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    for(i=0; i<(r+1)/2; i++){
    
        for(j=(r+1)/2; j>i+1; j--){
            printf(" ");
        }
        
        for(j=0; j<i+1; j++){
                printf("*");
        }
        printf("\n");
    }
    for(i=0; i<(r-1)/2; i++){
    
        for(j=0; j<i+1; j++){
            printf(" ");
        }
        
        for(j=i; j<(r-1)/2; j++){
                printf("*");
        }
        printf("\n");
    }
}
