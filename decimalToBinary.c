#include<stdio.h>

int main (){
    int n,num[10],i;
    printf("Enter a number to convert : ");
    scanf("%d",&n);
    printf("\nThe Binary of %d is ",n);

    for (i = 0; n > 0; i++){
        num[i] = n % 2;
        n = n / 2;
    }
    
    for ( i = i - 1; i >= 0 ; i--)
    {
        printf("%d",num[i]);
    }
    printf("\n");
    return 0;
}