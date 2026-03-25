#include <stdio.h>

int f(int x) {
    return (x*x + 5*x + 7);
}

int g(int x) {
    return (x*x*x*x + 2*x + 1);
}

int fog(int x) {
    return f(g(x));
}

int main() {

    int x;

    scanf("%d", &x);

    int res = fog(x);

    printf("%d\n", res);
    return 0;
}