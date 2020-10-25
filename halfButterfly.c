#include<stdio.h>
//Rows : 1 to n
// * : Row No
//Space = (2 * n) - (2 * Row_Number)
// For Down
//Rows : n to 1

int main (){
    int n,i,j,space;
    printf("Enter Nuumber of Rows : ");
    scanf("%d",&n);

    for(i = n; i >= 0; i--){
        for(j = 0; j <=i; j++){
            printf("* ");
        }
        space = (2 * n) - (2 * i);
        for(j = 1; j <= space; j++){
            printf("  ");
        }
        for(j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}