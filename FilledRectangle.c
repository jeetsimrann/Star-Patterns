#include <stdio.h>

int main()
{
    int i,j,r,l;
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
     printf("Enter the number of columns:\n");
    scanf("%d", &l);
    for(i=0; i<r; i++){
        for(j=0; j<l; j++){
            printf("*");
        }
        printf("\n");
    }
}