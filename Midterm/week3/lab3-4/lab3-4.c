/*
Computer Programming : lab3-4
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <math.h>
int main(){
    double num1, num2;
    scanf("%lg%lg",& num1,& num2);
    printf("%.2f", hypot(num1, num2));
}