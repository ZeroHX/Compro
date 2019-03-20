#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char txt[20][61], str[61];
    for(int i = 0; i < 20; i++) scanf(" %[^\n]s", txt[i]);
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < strlen(txt[i]); j++){
            if(j == 0 || txt[i][j-1] == ' ') txt[i][j] = toupper(txt[i][j]);
            else txt[i][j] = tolower(txt[i][j]);
        }
    }
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 19; j++){
            if(strcmp(txt[j],txt[i]) > 0){
                strcpy(str, txt[i]);strcpy(txt[i], txt[j]);strcpy(txt[j], str);
            }
        }
    }
    for(int i = 0; i < 20; i++) printf("%d %s\n",i+1, txt[i]);
}