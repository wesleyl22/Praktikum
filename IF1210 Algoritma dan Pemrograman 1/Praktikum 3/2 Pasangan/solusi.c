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

    int sum = 0;
    for(j=0; j<N; j++) {
        int k;
        for(k=j+1; k<N; k++) {
            sum += (arr[j] < arr[k]) ? arr[j] : arr[k];
        }
    }

    printf("%d\n", sum);

    return 0;
}