#include <stdio.h>

int main()
{
    int i,j,k,r;
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    for(i=0; i<r; i++){
        for(j=0; j<i; j++){
            printf(" ");
        }
        for(j=0; j<r; j++){
            printf("*");
            
        }
        printf("\n");
    }
}