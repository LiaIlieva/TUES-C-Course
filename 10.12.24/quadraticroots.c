#include "quadraticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots(double a, double b, double c) {
    struct QuadraticRootsResult s1;

    double d = (b * b) - (4 * a * c);

    if (a == 0 || d < 0) {
        s1.norealroots = 1;
        return s1;
    }

    double x1 = (-b + sqrt(d)) / (2 * a);
    double x2 = (-b - sqrt(d)) / (2 * a);

    s1.x1 = x1;
    s1.x2 = x2;
    s1.norealroots = 0;

    return s1;
}
