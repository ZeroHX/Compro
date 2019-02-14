/*
Computer Programming : lab5-3
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    int num, i = 1;
    scanf("%d",&num);
    if (num >= 0){
        do{
            printf("%d ", num);
            num--;
        }
        while(num >= 0);
    }
    else{
        do{
            printf("%d ", num);
            num++;
        }
        while(num <= 0);
    }
}