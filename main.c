#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void to_polar(double x, double y, double *r, double *theta) {
    *r = sqrt(x * x + y * y);
    *theta = atan2(y, x) * 180.0 / M_PI;
}

int main(void) {
    double x, y;
    double r, theta;

    if (scanf("%lf %lf", &x, &y) != 2) {
        return 1;
    }

    to_polar(x, y, &r, &theta);
    printf("%.3f,%.2f", r, theta);

    return 0;
}