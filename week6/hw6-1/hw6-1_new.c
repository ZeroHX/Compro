/*
Computer Programming : hw6-1
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
   int num, count = 0;
   scanf("%d",& num);
   char ary[num][2], alp;
   for(int i = 0; i < num; i++){
       ary[i][1] = 0;
       ary[i][0] = 0;
   }
   for(int i = 0; i < num; i++){
        scanf(" %c",&alp);
        alp = tolower(alp);
        int check = 1;
        for(int j = 0; j < num; j++){
            if (alp == ary[j][0]){
                ary[j][1]++;
                check = 0;
                break;
            }
        }
        if (check){
            ary[count][0] = alp;
            ary[count][1] = 1;
            count++;
        }
    }
    for(int i = 0; i < num; i++){
       if(ary[i][1] != 0) printf("%c: %d\n", ary[i][0], ary[i][1]);
   }
}
