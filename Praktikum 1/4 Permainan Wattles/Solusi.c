#include <stdio.h>

int main() {

    int D,M;

    scanf("%d %d", &D, &M);

    while (D > 0 && M > 0 && M != D) {
        int angkaD = D;
        int angkaM = M;
        int akhirD = D%10;
        angkaD /= 10;
        int akhirM = M%10;
        angkaM /= 10;
        while(angkaD >= 10) {
            angkaD /= 10;
        }
        while(angkaM >= 10) {
            angkaM /= 10;
        }

        D -= (angkaM + akhirM);
        M -= (angkaD + akhirD);
}

    if (D == M || (D < 0 && M < 0)) {
        printf("Wattles\n");
    } else {
        if (D < 0) {                
            printf("Mebel\n");
        } else {
            printf("Deeper\n");
        }
    }

    return 0;
}