#include <stdio.h>

int main() {
    int n, i;
    int p = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i = i + 2) {
        p = p * i;
    }

    printf("Product = %d", p);

    return 0;
}