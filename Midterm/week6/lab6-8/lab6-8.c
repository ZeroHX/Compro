/*
Computer Programming : lab6-7
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char lower[26], txt[200], up[26] = {'A', 'B', 'X', 'Y', 'P', 'Q', 'R', 'M', 'N', 'C', 'E', 'D', 'K', 'L', 'J', 'O', 'S', 'H', 'T', 'U', 'F', 'V', 'Z', 'G', 'W', 'I'};
    for(int i = 0; i < 26; i++) lower[i] = up[i] + 32;
    scanf("%[^\n]s", txt);
    for(int i = 0; i < strlen(txt); i++){
        if(islower(txt[i])){
            for(int l = 0; l < strlen(lower) ;l++){
                if(lower[l] == txt[i]){
                    if(l >= 21){
                        printf("%c", lower[5-(26-l)]);
                        break;
                    }
                    else{
                        printf("%c", lower[l+5]);
                        break;
                    }
                }
            }
        }
        else if(isupper(txt[i])){
            for(int u = 0; u < strlen(up) ;u++){
                if(up[u] == txt[i]){
                    if(u >= 21){
                        printf("%c", up[5-(26-u)]);
                        break;
                    }
                    else{
                        printf("%c", up[u+5]);
                        break;
                    }
                }
            }
        }
        else{
            printf("%c", txt[i]);
        }
    }
}