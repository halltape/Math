#include <stdio.h>
#include <math.h>

    int main ()
{
    // this program calculates the area of a triangle //
    // It needs two sides and one angle between //
    double a,b, y, area, pi = 3.141593;
    scanf("%lf%lf%lf", &a, &b, &y);
    y = y*pi/180;
    area = 0.5 * a * b * sin(y);
    printf("%.2lf", area);


    return 0;
}