#include <stdio.h>

int Prime(int n);

int main() {
    int n, i, count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i) {

        if (isPrime(i) == 1) {

            if (isPrime(n - i) == 1) {
                printf("%d  can be Written as : %d + %d\n", n, i, n - i);
                count = 1;
            }
        }
    }
    if (count == 0)
        printf("%d cannot be expressed as the sum of two prime numbers.\n", n);

    return 0;
}


int isPrime(int n) {
    int i, p = 1;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            p = 0;
            break;
        }
    }
    return p;
}
