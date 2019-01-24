/*
Computer Programming : lab2-7
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    char text1[31], text2[31], text3[31], text4[31];
    scanf("%s%s%s%s", text1, text2, text3, text4);
    printf("String 1: %.3s\n", text1);
    printf("String 2: %.4s\n", text2);
    printf("String 3: %.5s\n", text3);
    printf("String 4: %.6s", text4);
}