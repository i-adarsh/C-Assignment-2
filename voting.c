#include<stdio.h>

int main (){
    int a;
    printf("Enter Your Age : ");
    scanf("%d",&a);
    if (a >= 18){
        printf("Congratulations !!! You are Elligble for Voting\n");
    }
    else{
        printf("You are Not Elligible for Voting\n");
    }
    return 0; 
}