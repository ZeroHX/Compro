/*
Computer Programming : lab4-6
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <ctype.h>
int main(){
    char chr;
    scanf("%c",&chr);
    if(isdigit(chr)){
        printf("number");
    }
    else if(islower(chr)){
        printf("lowercase");
    }
    else if(isupper(chr)){
        printf("uppercase");
    }
    else{
        printf("error");
    }
}
