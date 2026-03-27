#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int arr[N];
    int i;
    for(i=0; i<N; i++) {
        scanf("%d ", &arr[i]);
    }

    int j;
    for(j=0; j<N; j++) {
        int k;
        k = N-j-1;
        printf("%d", arr[k]);

        if(k != 0) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}