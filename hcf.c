#include<stdio.h>

int main (){
    int x,y,hcf = 1,i;
    printf("Input 1st number for HCF: ");
    scanf("%d",&x);
    printf("Input 2nd number for HCF: ");
    scanf("%d",&y);
    for (i = 1; i <= x || i <= y ; i++){
        if (x % i == 0 && y % i == 0){
            hcf = i;
        }
    }
    printf("\nHCF of %d and %d is %d\n",x,y,hcf);
    return 0;
}