#include <stdio.h>
#include <math.h>

int main() {
    // the distance between two points //
    double x1 = -39, x2 = 62;
    double module_x1, module_x2;
    int res;
    module_x1 = fabs(x1);
    module_x2 = fabs(x2);

    res = module_x1 + module_x2;
    printf("%d", res);


    return 0;
}