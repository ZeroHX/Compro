/*
Computer Programming : hw6-4
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <string.h>
int main(){
    char text[100];
    int start = 0, count = 0, length = -1, pos = 0;
    scanf("%[^\n]s", text);
    text[strlen(text)] = ' ';
    for(int i = 0; i < strlen(text); i++){
        if(text[i] == ' '){
            if(count > length){
                start = pos;
                length = count;
            }
            pos = i+1;
            count = 0;
        }
        else count++;
    }
    for(int i = 0; i < length; i++) printf("%c", text[start+i]);
}