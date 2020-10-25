#include<stdio.h>

int main (){
    int n,rem,sum = 0,fact = 1,real;
    printf("Check whether a number is Strong Number or not : \n");
    printf(" ---------------------------------------------------- \n");
    printf("\nInput a number to check whether it is Strong number : ");
    scanf("%d",&n);
    real = n;
    while (n > 0)
    {
        rem = n % 10;
        for (; rem > 0 ; rem --){
        fact *= rem;
        }
        sum += fact;
        fact = 1;
        n = n / 10;
    }
    if (sum == real)
        printf("\n%d is a Strong number.\n",real);
    else 
        printf("\n%d is Not a Strong number.\n",real);
    return 0;
}