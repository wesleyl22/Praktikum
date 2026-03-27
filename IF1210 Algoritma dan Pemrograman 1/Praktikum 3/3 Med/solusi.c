#include <stdio.h>
#include <stdbool.h>

int main() {

    int N, X;
    scanf("%d %d", &N, &X);

    int arr[N];

    bool ya = false;
    int i;
    for(i=0; i<N; i++) {
        int num;
        scanf("%d ", &num);

        if (num == X) {
            ya = true;
        }

        arr[i] = num;
    }

    int j;
    if (ya) {
        printf("%d ", X);
    }

    for(j=0; j<N; j++) {
        printf("%d", arr[j]);

        if(j < (N-1)) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}