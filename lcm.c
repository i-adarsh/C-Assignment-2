#include<stdio.h>

int main (){
    int x,y,lcm = 1,i,max;
    printf("Input 1st number for LCM : ");
    scanf("%d",&x);
    printf("Input 2nd number for LCM : ");
    scanf("%d",&y);

    if (x > y)
        max = x;
    else
        max = y;
    while (1){
        if (max % x == 0 && max % y == 0){
        printf("\nThe LCM of %d and %d is : %d\n",x,y,max);
        break;
        }
    else{
        max++;
        }
    }
    return 0;
}