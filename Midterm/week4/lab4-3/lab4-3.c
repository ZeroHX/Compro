/*
Computer Programming : lab4-3
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    char a;
    scanf("%c",& a);
    a=='A'?printf("Genius"):a=='B'?printf("Good"):a=='C'?printf("Try Harder"):a=='D'?printf("Very Bad"):a=='F'?printf("Fail"):printf("Invalid Input");
}