#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int arr[N];

    int i;
    for(i=0; i<N; i++) {
        scanf("%d ", &arr[i]);
    }

    int Q;
    scanf("%d", &Q);

    int j;

    char totalC = 'L';
    long long totalK = 0;
    for(j=0; j<Q; j++) {
        char C;
        long long K;

        scanf(" %c %d", &C, &K);

        if (totalC == C) {
            totalK += K;
        } else {
            if (totalK < K) {
                totalC = C;
                totalK = K - totalK;
            } else {
                totalK -= K;
            }
        }
    }

    totalK = totalK % N;

    if (totalC == 'L') {
            long long z;
            for(z=0; z<totalK; z++) {
               int k;
                int first = arr[0];
                for(k=0; k<(N-1); k++) {
                    arr[k] = arr[k+1];
                }
            arr[N-1] = first;
            }
        } else {
            long long z;
            for(z=0; z<totalK; z++) {
                int k;
                int last = arr[N-1];
                for(k=(N-1); k>0; k--) {
                    arr[k] = arr[k-1];
                }
            arr[0] = last;
            }
        }


    int l;
    for(l=0; l<N; l++) {
        printf("%d", arr[l]);

        if(l < (N-1)) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}