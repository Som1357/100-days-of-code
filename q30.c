#include <stdio.h>

int main() {
    int n, digit, r = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n != 0) {
        digit = n % 10;
        r = r * 10 + digit;
        n = n / 10;
    }

    printf("Reverse = %d", r);

    return 0;
}