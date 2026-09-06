#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, SI, CI;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f%f%f", &p, &r, &t);

    SI = (p * r * t) / 100;
    CI = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f", CI);

    return 0;
}