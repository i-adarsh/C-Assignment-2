#include<stdio.h>

int main (){
    int n;
    short i,count = 1, sum = 0;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    printf("\nThe Even Numbers are : ");
    for (i = 1; count <= n;i++)
    {
        if (i % 2 == 0){
            printf("%d ",i);
            sum += i;
            count++;
        }
    }
    printf("\nSum of Even Natural Numbers upto %d terms = %d\n",count - 1,sum);
    return 0;
}