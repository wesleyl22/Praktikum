#include <stdio.h>

int main() {

    int N;

    scanf("%d", &N);

    for(int j=1; j<N; j++) {
        for(int i=j; i<=N; i++) {
            int space = N-i;

            int asterisk = 2*(i-1) + 1;

            while(space > 0) {
                printf(" ");
                space--;
            }
            while(asterisk > 0) {
                printf("*");
                asterisk--;
            }

            printf("\n");
        }  
    }

    for(int i=0; i<N; i++) {
        int space = N-2;
        int asterisk = 3;

        while(space > 0) {
                printf(" ");
                space--;
            }
            while(asterisk > 0) {
                printf("*");
                asterisk--;
            }

            printf("\n");

    }

    return 0;
}