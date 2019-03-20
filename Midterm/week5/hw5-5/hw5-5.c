/*
Computer Programming : hw5-8
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    int one = 0, two = 0, sum = 0, inp;
    do{
        scanf("%d",&inp);
        two = inp;
        if (one == 0){
            //printf("two first: %d\n", two);
            sum += (two%1);
            //printf("one: %d\ntwo: %d\nsum: %d\n",one,two,sum);
            one = two;
            //printf("one: %d\ntwo: %d\nsum: %d\n",one,two,sum);
        }
        else{
            //printf("two first: %d\n", two);
            sum += one%two;
            //printf("++one: %d\ntwo: %d\nsum: %d\n",one,two,sum);
            two = one;
            //printf("one: %d\ntwo: %d\nsum: %d\n",one,two,sum);
        }
    }
    while(inp != 0);
    printf("%d",sum);
}