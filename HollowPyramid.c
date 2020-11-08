#include <stdio.h>

int main()
{
    int i,j,k,r;
    
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    for(i=r; i>0; i--){
    
        for(j=0; j<i; j++){
            printf(" ");
        }
        
        for(j=0; j<(r-i)*2+1; j++){
            if(i==1){
                printf("*");
            }
            else{
                if(j==0 || j == (r-i)*2){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}