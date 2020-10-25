#include<stdio.h>

int main (){
    int p,c,m;

    printf("Enter the marks obtained in Physics : ");
    scanf("%d",&p);
    printf("Enter the marks obtained in Chemistry : ");
    scanf("%d",&c);
    printf("Enter the marks obtained in Mathematics : ");
    scanf("%d",&m);
    printf("Total in All Three Subject : %d\n",p+c+m);
    printf("Total in Maths and Physics : %d\n",m+p);

    if ((m >= 65 && p >= 55 && c >= 50 && p+c+m >= 180) || (m + p >= 140 )){
        printf("\nThe candidate is eligible for Admission.\n");
    }
    else{
        printf("\nThe candidate is Not eligible for admission.\n");
    }

    return 0;
}