/*
Computer Programming : lab6-1
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char text[300], alpha, pos[10];
    scanf("%[^\n]s", text);
    scanf(" %c", &alpha);
    int count = 0, c = 0;
    for(int i = 0; i<strlen(text); i++){
        if(tolower(alpha) == tolower(text[i])){
            count++;
            pos[c] = (char) i+1;
            c++;
        }
    }
    //printf("%d", strlen(pos));
    if(count == 0){
         printf("Not found.");
    }
    else{
        printf("There is/are %d \"%c\" in the above sentences.\n", count, alpha);
        printf("Position: ");
        for(int j = 0; j < strlen(pos); j++){
            if(pos[j] >= strlen(text) || (int) pos[j+1] < (int) pos[j]){
                printf("%d", pos[j]);
                return 0;
            }
            else{
                printf("%d, ", pos[j]);
            }
        }

    }



}