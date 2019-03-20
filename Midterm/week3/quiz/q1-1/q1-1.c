#include <stdio.h>
int main(){
    int a = 17, b = 25, c = 50, d = 10;
    printf("Before(a,b,c,d): %d,%d,%d,%d\n", a, b, c, d);
    d = a *= c / b + 5;
    printf("After(a,b,c,d): %d,%d,%d,%d\n", a, b, c, d);
    d = (a *= c) / b + 5;
    printf("After(a,b,c,d): %d,%d,%d,%d", a, b, c, d);
    return 0;
}