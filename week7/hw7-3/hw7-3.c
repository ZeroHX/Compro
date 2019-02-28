#include <stdio.h>
#include <string.h>
int main(){
    char state, act[30];
    scanf("%c %s",&state, act);
    for(int i = 0; i < strlen(act); i++){
        if(act[i] == 'A'){
            if(state == 'L'){
                state = 'C';
            }
            else if (state == 'C'){
                state = 'L';
            }
        }
        if(act[i] == 'B'){
            if(state == 'C'){
                state = 'R';
            }
            else if(state == 'R'){
                state = 'C';
            }
        }
        if(act[i] == 'C'){
            if(state == 'L'){
                state = 'R';
            }
            else if(state == 'R'){
                state = 'L';
            }
        }
    }
    printf("%c", state);
}