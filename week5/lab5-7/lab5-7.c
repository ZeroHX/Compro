/*
Computer Programming : lab5-7
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    int num, sum=0;
    do{
        scanf("%d",&num);
        if(num != -9){
           sum += num;
        }
    }
    while(num != -9);
    printf("%d", sum);
}
