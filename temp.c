#include<stdio.h>

int main (){
    int t;
    printf("Enter Temperature (in Centigrade) : ");
    scanf("%d",&t);
    if (t < 0)
        printf("\nFreezing Weather.\n");
    else if (t >= 0 && t < 10)
        printf("\nVery Cold Weather\n");
    else if (t >= 10 && t < 20)
        printf("\nCold weather\n");
    else if (t >= 20 && t < 30)
        printf("\nNormal in Temp\n");
    else if (t >= 30 && t < 40)
        printf("\nIts Hot\n");
    else if (t > 40)
        printf("\nIts Very Hot\n");
    return 0;
}