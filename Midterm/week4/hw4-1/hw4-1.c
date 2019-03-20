/*
Computer Programming : hw4-1
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    char chr;
    scanf("%c",&chr);
    if((chr >= 65 && chr <= 90) || (chr >= 97 && chr <= 122)){
        if(chr <= 90){
            printf("%c", chr+32);
        }
        else{
            printf("%c", chr-32);
        }
    }
    else{
        printf("error");
    }
}