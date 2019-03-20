#include <stdio.h>
struct ConeSurface {
    double r;
    double L;
}c1,c2;
int main(){
    double pi = 3.141592654;
    scanf("%lf %lf",&c1.r,&c1.L);
    scanf("%lf %lf",&c2.r,&c2.L);
    printf("%.2lf\n",pi*c1.r*c1.L + pi*(c1.r * c1.r));
    printf("%.2lf",pi*c2.r*c2.L + pi*(c2.r * c2.r));
}