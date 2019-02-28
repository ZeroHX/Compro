/*
Computer Programming : hw6-6
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char txt[20][61], lname[61];
    for (int i = 0; i < 20; i++) scanf(" %[^\n]s", txt[i]);

    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 61; j++){
            if(j == 0 || txt[i][j-1] == ' ') txt[i][j] = toupper(txt[i][j]);
            else txt[i][j] = tolower(txt[i][j]);
        }
    }

    for (int i = 0; i < 19; i++){
        for (int j = i+1; j < 20; j++){
            if (strcmp(txt[i], txt[j]) > 0){
                strcpy(lname, txt[i]);
                strcpy(txt[i], txt[j]);
                strcpy(txt[j], lname);
            }
        }
    }

    for(int i = 0; i < 20; i++) printf("%s\n", txt[i]);
}