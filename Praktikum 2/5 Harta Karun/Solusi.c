#include <stdio.h>
#include <math.h>
#include <float.h>

double cekParalel(double m1, double m2) {
    return m1 == m2;
}

double getGradien(double x1, double y1, double x2, double y2) {
    return (y2-y1)/(x2-x1);
}

double getTipotX(double m1, double x1, double y1, double m2, double x2, double y2) {
    return ((m1*x1 - m2*x2 + y2 - y1) / (m1 - m2));
}

double getY(double m1, double x1, double y1, double x) {
    return (m1*(x-x1) + y1);
}

double getJarak(double x1, double y1, double x2, double y2) {
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

double titikPotong(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, double *tipotX, double *tipotY) {
    double m1 = getGradien(x1, y1, x2, y2);
    double m2 = getGradien(x3, y3, x4, y4);

    double X = getTipotX(m1, x1, y1, m2, x3, y3);
    *tipotX = X;
    *tipotY = getY(m1, x1, y1, X);
}

int main() {

    double x_A, x_B, x_C, x_D, x_E;
    double y_A, y_B, y_C, y_D, y_E;

    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &x_A, &y_A, &x_B, &y_B, &x_C, &y_C, &x_D, &y_D, &x_E, &y_E);

    double n1 = -1;
    double n2 = -1;
    double n3 = -1;

    // AB CD

    if (cekParalel(getGradien(x_A, y_A, x_B, y_B), getGradien(x_C, y_C, x_D, y_D)) == 0) {
    double x_ABCD, y_ABCD;
    
    titikPotong(x_A, y_A, x_B, y_B, x_C, y_C, x_D, y_D, &x_ABCD, &y_ABCD);
    n1 = getJarak(x_ABCD, x_ABCD, x_E, y_E);
    }

    // AC BD

    if (cekParalel(getGradien(x_A, y_A, x_C, y_C), getGradien(x_B, y_B, x_D, y_D)) == 0) {
    double x_ACBD, y_ACBD;

    titikPotong(x_A, y_A, x_C, y_C, x_B, y_B, x_D, y_D, &x_ACBD, &y_ACBD);
    n2 = getJarak(x_ACBD, y_ACBD, x_E, y_E);
    }

    // AD BC

    if (cekParalel(getGradien(x_A, y_A, x_D, y_D), getGradien(x_B, y_B, x_C, y_C)) == 0) {
    double x_ADBC, y_ADBC;
    
    titikPotong(x_A, y_A, x_D, y_D, x_B, y_B, x_C, y_C, &x_ADBC, &y_ADBC);
    n3 = getJarak(x_ADBC, y_ADBC, x_E, y_E);
    }

    double lowest = 0;

    if (n1 >= lowest) {
        lowest = n1;
    }
    if (n2 >= lowest) {
        lowest = n2;
    }
    if (n3 >= lowest) {
        lowest = n3;
    }

    printf("%.2f\n", lowest);

    return 0;
}