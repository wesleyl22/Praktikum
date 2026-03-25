#include <stdio.h>

int main() {

    int N;

    scanf("%d", &N);

    int M = N;

    int res = 0;

    while (N > 0) {
        res += N%10;
        N /= 10;
    }

    if (M%res == 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}