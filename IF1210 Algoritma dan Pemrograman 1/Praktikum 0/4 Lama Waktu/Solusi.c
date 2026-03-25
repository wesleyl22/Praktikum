#include <stdio.h>

int main() {
    int H, M, S, h, m, s;

    scanf("%d %d %d\n%d %d %d", &H, &M, &S, &h, &m, &s);

    int HH, MM, SS;

    HH = h-H;
    MM = m-M;
    SS = s-S;

    printf("%d %d %d\n", HH, MM, SS);

    return 0;
}