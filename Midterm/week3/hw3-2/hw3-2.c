/*
Computer Programming : hw3-2
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    float cost, per, amount;
    scanf("%f%f%f",& cost ,& per ,& amount);
    printf("%.2f", cost*((float) (100-per)/100)*amount);
}