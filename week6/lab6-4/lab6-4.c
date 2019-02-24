/*
Computer Programming : lab6-4
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <string.h>
int main(){
    char text[100];
    scanf("%[^\n]s", text);
    for(int i = strlen(text)-1; i >= 0; i--) printf("%c", text[i]);
}