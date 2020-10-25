#include<stdio.h>

int main (){
    short ch;
    int a,b;
    printf("Input 1 for area of Circle");
    printf("\nInput 2 for area of rectangle");
    printf("\nInput 3 for area of triangle");
    printf("\nEnter Your Choice : ");
    scanf("%hi",&ch);
    switch (ch)
    {
    case 1:
        printf("Enter Radius of the Circle : ");
        scanf("%d",&a);
        printf("\nThe Area is : %.2f\n",(3.14 * a * a));
        break;
    case 2:
        printf("Enter Length of Rectangle : ");
        scanf("%d",&a);
        printf("Enter Breadth of Rectangle : ");
        scanf("%d",&b);
        printf("\nThe Area is : %d\n",a * a);
        break;
    case 3:
        printf("Enter Base of Triangle : ");
        scanf("%d",&a);
        printf("Enter Height of Triangle : ");
        scanf("%d",&b);
        printf("\nThe Area is : %.2f\n",(0.5 * a * b));
        break;
    default:
        printf("\nInvalid Input , Try Again !!!\n");
        break;
    }
    return 0; 
}