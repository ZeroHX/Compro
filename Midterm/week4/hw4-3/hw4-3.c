/*
Computer Programming : hw4-3
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    int cost, amount;
    float per;
    scanf("%d%f%d",&cost ,&per ,&amount);
    float pro1 = ((100-per)/100)*cost*amount;   //Promotion1: Percent
    float pro2 = cost * (amount-(amount/3));           //Promotion2: Buy 2 Get 1
    if(pro2 < pro1){
        printf("Buy 2 Get 1\n");
        printf("%.2f", pro2);
    }
    else{
        printf("Discount %.0f%%\n", per);
        printf("%.2f", pro1);
    }
}