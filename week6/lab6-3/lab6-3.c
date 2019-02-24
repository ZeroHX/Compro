/*
Computer Programming : lab6-3
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    float num, mx[9];
    for(int i = 0; i < 9; i++){
        scanf("%f",&num);
        mx[i] = num;
        //printf("[Ans:%.2f]", mx[i]);
    }
    if (mx[0] == mx[4] && mx[4] == mx[8] && mx[1] == 0 && mx[2] == 0 && mx[3] == 0 && mx[5] == 0 && mx[6] == 0 && mx[7] == 0)printf("This is a scalar matrix");
    else printf("This is not a scalar matrix");

}