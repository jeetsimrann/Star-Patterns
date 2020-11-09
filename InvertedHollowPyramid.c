#include <stdio.h>

int main()
{
    int i,j,r;
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    for(i=r; i>0; i--){
        for(j=r; j>i; j--){
            printf(" ");
        }
        for(j=0; j<i*2-1; j++){
            if(i==r){
                printf("*");
            }
            else{
                if(j==0 || j==i*2-2){
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