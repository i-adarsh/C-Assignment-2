#include<stdio.h>

int main (){
    int a;
    printf("Enter the height of the person (in centimeters) : ");
    scanf("%d",&a);
    if (a < 150){
        printf("The person is Dwarf.\n");
    }
    if (a >= 150 && a < 165){
        printf("The person is of Average Height\n");
    }
    if(a >= 165){
        printf("The person is Tall.\n");
    }
    return 0; 
}