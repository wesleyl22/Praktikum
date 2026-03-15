#include <stdio.h>

int main() {

    int N;

    scanf("%d", &N);

    int res = 0;

    while (N > 1) {
        if (N%2 == 0) {
            N /= 2;
        } else {
            N = (N*3) + 1;
        }
        res++;
    }

    printf("%d\n", res);

    return 0;
}