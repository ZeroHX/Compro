/*
Computer Programming : lab3-3
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    int isec;
    scanf("%d",& isec);
    printf("%d s = %d d %d h %d m %d s", isec, isec/86400, (isec % 86400)/3600, (isec % 3600)/60, isec % 60);
}