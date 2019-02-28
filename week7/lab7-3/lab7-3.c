/*
Computer Programming : lab7-3
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <math.h>
double perimeter(double x, double y, double z){
    return x+y+z;
}
double area(double x, double y, double z){
    return 0.5 * x * y;
}
int main(){
    double a, b, c, per, ar;
    scanf("%lf %lf",&a,&b);
    per = perimeter(a, b, hypot(a,b));
    ar = area(a, b, hypot(a,b));
    printf("Perimeter: %.2lf\n", per);
    printf("Area: %.2lf", ar);
}