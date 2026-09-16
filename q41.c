#include <stdio.h>

int main() {
    int n, original, first, last, digits = 1;
    int middle, result;

    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    last = n % 10;

    while(n >= 10) {
        n = n / 10;
        digits = digits * 10;
    }

    first = n;

    middle = original % digits;
    middle = middle / 10;

    result = last * digits + middle * 10 + first;

    printf("Result = %d", result);

    return 0;
}