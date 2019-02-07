/*
Computer Programming : lab4-1
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d",& num1,& num2);
    (num1 == num2) ? printf("%d + %d = %d", num1, num2, num1+num2) : printf("%d - %d = %d", num1, num2, num1-num2);
}