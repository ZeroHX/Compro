/*
Computer Programming : hw5-1
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    int num1, num2, ans;
    scanf("%d %d",&num1,&num2);
    ans = num1;
    if (num1 > num2){
        do{
            printf("%d ", ans);
            ans -= 1;
        }
        while(ans >= num2);
    }
    else{
        do{
            printf("%d ", ans);
            ans += 1;
        }
        while(ans <= num2);
    }
}