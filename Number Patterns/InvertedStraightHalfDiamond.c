#include <stdio.h>

int main()
{
    int i,j,r,count;
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    count = (r/2)+2;
    for(i=0; i<r; i++){
        if(i<r/2){
            for(j=r/2; j>i; j--){
               printf("%d",count);
            }
            count--;
            printf("\n");
        }

        else{
            count++;
            for(j=0; j<=i-(r/2); j++){
                printf("%d",count);
            }
            printf("\n");
        }
        
    }

} 