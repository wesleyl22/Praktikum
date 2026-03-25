#include <stdio.h>
#include <ctype.h>

int cekKarakter(int n) {
    return n>= 8;
}

int cekAngka(char a) {
    return (a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7'|| a == '8' || a == '9' || a == '0');
}

int cekKapital(char a) {
    if (cekAngka(a) == 1) {
        return 0;
    }

    char b = toupper(a);

    return (a == b);
}

int cekKecil(char a) {
    if (cekAngka(a) == 1) {
        return 0;
    }
    char b = tolower(a);

    return (a == b);
}

void cekKuat(int n) {
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;

    n1 = cekKarakter(n);
    for(int i=0; i<n; i++) {
        char a = 0;
        scanf("%c", &a);
        scanf(" ");

        n2 += cekAngka(a);
        n3 += cekKapital(a);
        n4 += cekKecil(a);
}
    if (n1 == 1 && n2 >= 1 && n3 >= 1 && n4 >= 1) {
        printf("KUAT\n");
    } else {
        printf("LEMAH\n");
    }
}

int main() {

    int n;

    scanf("%d\n", &n);

    cekKuat(n);

    return 0;
}