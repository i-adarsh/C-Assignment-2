#include<stdio.h>
#include<math.h>

int main () {
    int n,sum = 0,real,rem,p = 0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    
    real = n;
    while (n != 0)
    {
        ++p;
        n = n / 10;
    }
    n = real;
    do
    {
        rem = n % 10;
        sum += pow(rem , p);
        n = n / 10;
    } while (n != 0);
    if (sum == real){
        printf("\n%d is an Armstrong number.\n",real);
    }
    else
    {
        printf("\n%d is Not an Armstrong number.\n",real);
    }
    
    return 0; 
}