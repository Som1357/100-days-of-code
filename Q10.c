#include <stdio.h>

int main() {
    int s, h, m, r;

    printf("Enter time in seconds: ");
    scanf("%d", &s);

    h = s / 3600;
    r = s % 3600;
    m = r / 60;
    s = r % 60;

    printf("Hours = %d\n", h);
    printf("Minutes = %d\n", m);
    printf("Seconds = %d", s);

    return 0;
}