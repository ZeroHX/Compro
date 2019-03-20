/*
Computer Programming : lab4-3
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    char chr;
    scanf("%c",& chr);
    if(chr=='A' || chr=='a'){
        printf("Genius");
    }
    else if(chr=='B' || chr=='b'){
        printf("Good");
    }
    else if(chr=='C' || chr=='c'){
        printf("Try Harder");
    }
    else if(chr=='D' || chr=='d'){
        printf("Very Bad");
    }
    else if(chr=='F' || chr=='f'){
        printf("Fail");
    }
    else{
        printf("Invalid Input");
    }
}