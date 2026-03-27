#include <stdio.h>

// Pake kode ini dapet 90, kalo mau 100 harus pake dp (precompute, binary gtlah) kynya

int main() {

    long long N, K;
    scanf("%lld %lld", &N, &K);

    int arr[N];

    int path[N];

    int i;
    for(i=0; i<N; i++) {
        scanf(" %d ", &arr[i]);
    }

    int j;
    for(j=0; j<N; j++) {
        int keepTrack[N];
        int k;
        for(k=0; k<N; k++) {
            keepTrack[k] = -1;
        }

        int cur = j;
        int step = 0;
        while(keepTrack[cur] == -1 && step <= K) {
            keepTrack[cur] = step;
            path[step] = cur;

            cur = arr[cur];
            step++;
        }

        if (step > K) {
            printf("%d", path[K]);
        } else {
            long long tLen = keepTrack[cur];
            long long cLen = step-tLen;
            long long jump = K - tLen;
            long long mod = jump % cLen;

            printf("%d", path[tLen + mod]);
        }

        if (j < (N-1)) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}