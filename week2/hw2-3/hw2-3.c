/*
Computer Programming : hw2-3
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    char num[6];
    scanf("%s", num);
    printf("%c", num[0]);
    printf("%81c%c", num[0], num[1]);
    printf("%80c%c%c", num[0], num[1], num[2]);
    printf("%79c%c%c%c", num[0], num[1], num[2], num[3]);
    printf("%78c%c%c%c%c", num[0], num[1], num[2], num[3], num[4]);
}