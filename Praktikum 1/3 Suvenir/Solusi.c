#include <stdio.h>

int main() {

    int N;

    scanf("%d", &N);

    int M = N;
    int cnt = 1;

    while (N > 0) {
        int angka = M-N+1;
        while(angka > 0) {
            printf("%d", cnt);
            cnt++;
            angka--;
            if (angka == 0) {

            } else {
                printf(" ");
            }
        }
        N--;
        printf("\n");
    }

    return 0;
}