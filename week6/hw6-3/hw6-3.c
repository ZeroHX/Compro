/*
Computer Programming : hw6-3
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <string.h>
int main(){
    char text[100];
    scanf("%[^\n]s", text);
    char reverse[strlen(text)];
    int count = 0;
    for(int i = strlen(text)-1; i >= 0; i--) {
        if(text[count] != text[i]){
            printf("It is not Palindrome.\n");
            return 0;
        }
        count++;
    }
    printf("It is Palindrome.");
}