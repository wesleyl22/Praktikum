#include <stdio.h>
#include <stdbool.h>

int getDigit(int bil) {
    int digit = 1;
    bil /= 10;
    while(bil > 0) {
        digit++;
        bil /= 10;
    }

    return digit;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    int i;
    for(i=0; i<N; i++) {
        int num;
        scanf("%d ", &num);

        int j;
        bool inserted = false;
        for(j=0; j<i; j++) {
            int digitNum = getDigit(num);
            int digitJ = getDigit(arr[j]);
            if(digitNum > digitJ) {
                int k;
                for(k=i; k > j; k--) {
                    arr[k] = arr[k-1];
                }
                arr[j] = num;
                inserted = true;
                break;
            } else if(digitNum == digitJ) {
                if(num < arr[j]) {
                    int k;
                    for(k=i; k > j; k--) {
                        arr[k] = arr[k-1];
                    }
                    arr[j] = num;
                    inserted = true;
                    break;
                }
            }
        }

        if (!inserted) {
            arr[i] = num;
        }

    }

    for(i=0; i<N; i++) {
        printf("%d", arr[i]);

        if(i < N-1) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}