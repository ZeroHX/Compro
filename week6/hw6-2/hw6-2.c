/*
Computer Programming : hw6-2
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <string.h>
int main(){
    int pow;
    char say[20];
    scanf("%d",&pow);
    int zero = pow, one = pow;
    scanf("%s",say);
    for(int i = 0; i < strlen(say); i++){
        if (say[i] == say[i-1] && say[i] == say[i-2]){
            if (say[i] % 2 == 0){
                one = one - 3;
            }
            else{
                zero = zero -3;
            }
        }
        if (say[i] % 2 == 0){
            one--;
        }
        if (say[i] % 2 != 0){
            zero--;
        }

    }
    if(zero > one) printf("0 ");
    if(zero < one) printf("1 ");
    if(zero == one) printf("- ");
    printf("%d %d", zero, one);
}