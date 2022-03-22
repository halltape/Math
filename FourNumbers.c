#include <stdio.h>
#include <math.h>

int main() {
    // the distance between two points on the plane  //
    double x1, y1, x2, y2;
    double res;
    scanf("%lf%lf%lf%lf",&x1, &y1, &x2, &y2);
    res = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
    printf("%.2lf", res);

    return 0;
}





