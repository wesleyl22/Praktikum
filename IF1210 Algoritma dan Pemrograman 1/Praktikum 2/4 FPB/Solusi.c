#include <stdio.h>

int getMax(int a, int b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

void solve(int n) {
    int num[n];
    
    int max = -1;
    int prev = -1;
    for(int i=0; i<n; i++) {
        int res;
        scanf("%d", &res);
        scanf(" ");

        num[i] = res;

        max = getMax(prev, res);
    }

    int pembagi = -1;
    int j = 1;
    while (j <= max) {
        int yes = 0;
        for(int i=0; i<n; i++) {
            if (num[i] % j == 0) {
                yes++;
            }
        }

        if (yes == n) {
            pembagi = j;
        }
        j++;
    }

    int res = 0;

    for(int i=0; i<n; i++) {
        res += (num[i] / pembagi);
    }

    printf("%d\n", res);

}

int main() {
    int n;

    scanf("%d\n", &n);

    solve(n);

    return 0;
}