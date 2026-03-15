#include <stdio.h>

int main() {
    float v, t;

    scanf("%f\n%f", &v, &t);

    float s = v * t;

    printf("%.2f\n", s);

    return 0;
}