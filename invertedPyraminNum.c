#include<stdio.h>

int main (){

    int r,c;
    for (r = 5; r >= 1; r--)
    {
        for (c = 5; c > r; c--)
        {
          printf(" ");
        }
        for (c = 1; c <= r ; c++)
        {
            printf("%d", c);
        }
        for(c=r-1; c>=1; c--)
        {
            printf("%d", c);
        }

        for (c = 5; c > r; c--)
        {
          printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}