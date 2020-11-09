#include <stdio.h>

int main()
{
    int i,j,r,digit;
    printf("Enter the decimal number:\n");
    scanf("%d", &r);
    for(i=r; i>=0; i=i/2){
        digit = r%2;
        printf("%d",digit);
    }
}
