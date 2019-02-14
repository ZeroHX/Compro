/*
Computer Programming : lab5-5
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    int num, i=1;
    do{
        scanf("%d",&num);
        if (num%2 != 0 || num<2){
            printf("error\n");
        }
    }
    while(num%2!=0 || num<2);
    while(i <= (num/2)){
        printf("%d", i);
        i++;
    }
    i = 0;
    while(i < (num/2)){
        printf("%d", (num/2)-i);
        i++;
    }


}