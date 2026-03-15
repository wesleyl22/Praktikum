#include <stdio.h>

int main() {
    float r, luas;

    scanf("%f", &r);

    const float pi = 3.1415;

    luas = pi * r * r;

    printf("%f\n", luas);

    return 0;
}