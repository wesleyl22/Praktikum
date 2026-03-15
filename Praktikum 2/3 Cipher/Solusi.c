#include <stdio.h>

int isPrime(int x) {
    for(int i=2; i< x; i++) {
        if (x%i == 0) {
            return 0;
        }
    }
    return 1;
}

int isCipher(int x) {
    
    if (x == 1) {
        return 0;
    }

    int n1, n2, n3;
    n1 = 0;
    n2 = 0;
    n3 = 0;

    n1 = isPrime(x);

    int digits = 0;
    int total = 0;
    while(x > 0) {
        total += x%10;
        n2 += isPrime(x%10);
        x /= 10;
        digits ++;
    }

    n3 = isPrime(total);

    if (n1 == 1 && n2 == digits && n3 == 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int x;

    scanf("%d", &x);
    int res = isCipher(x);

    printf("%d\n", res);
    return 0;
}