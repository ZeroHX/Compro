/*
Computer Programming : lab4-2
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    double a, b, c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a > b && a < c){
        printf("%.2f", a);
    }
    else if(a > c && a < b){
        printf("%.2f", a);
    }
    else if(b > a && b < c){
        printf("%.2f", b);
    }
    else if(b > c && b < a){
        printf("%.2f", b);
    }
    else if(c < a && c > b){
        printf("%.2f", c);
    }
    else{
        printf("%.2f", c);
    }
}