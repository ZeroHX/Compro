/*
Computer Programming : lab3-3
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    int isec;
    scanf("%d",& isec);
    printf("%d s = %d d %d h %d m %d s", isec, (int) isec/86400, (int) (isec % 86400)/3600, (int) (isec % 3600)/60, (int) isec % 60);
}