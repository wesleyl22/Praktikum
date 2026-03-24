#include <stdio.h>
#include <math.h>
#include <float.h>

double getJarak(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int titikPotong(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, double *tX, double *tY) {
    
    double den = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
    
    if (den == 0) {
        return 0; 
    }
    
    *tX = ((x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4)) / den;
    *tY = ((x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4)) / den;
    
    return 1;
}

int main() {
    double x_A, y_A, x_B, y_B, x_C, y_C, x_D, y_D, x_E, y_E;

    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", 
          &x_A, &y_A, &x_B, &y_B, &x_C, &y_C, &x_D, &y_D, &x_E, &y_E);

    double n1 = -1, n2 = -1, n3 = -1;
    double tX, tY;

    // AB dan CD
    if (titikPotong(x_A, y_A, x_B, y_B, x_C, y_C, x_D, y_D, &tX, &tY)) {
        n1 = getJarak(tX, tY, x_E, y_E);
    }

    // AC dan BD
    if (titikPotong(x_A, y_A, x_C, y_C, x_B, y_B, x_D, y_D, &tX, &tY)) {
        n2 = getJarak(tX, tY, x_E, y_E);
    }

    // AD dan BC
    if (titikPotong(x_A, y_A, x_D, y_D, x_B, y_B, x_C, y_C, &tX, &tY)) {
        n3 = getJarak(tX, tY, x_E, y_E);
    }

    double lowest = DBL_MAX;

    if (n1 >= 0 && n1 < lowest) {
        lowest = n1;
    }
    if (n2 >= 0 && n2 < lowest) {
        lowest = n2;
    }
    if (n3 >= 0 && n3 < lowest) {
        lowest = n3;
    }

    printf("%.2f\n", lowest);

    return 0;
}