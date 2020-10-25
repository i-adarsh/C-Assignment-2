#include<stdio.h>
int main(){
    int n,rev = 0, r, num;
    printf("Enter a Number : ");
    scanf("%d",&n);
    num = n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n =  n / 10;
        
    }
    if (num == rev){
        printf("%d is a Palindrome Number\n",num);
    }
    else{
        printf("%d is Not a Palindrome Number. \n",num);
    }
    return 0;
}