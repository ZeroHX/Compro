/*
Computer Programming : hw5-4
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i = 0; i < num; i++){
        for(int j = -num+1; j <= i; j++)
            if(abs(j) <= i)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
}

/*
input: 5
output:
for row 0-4
0    * for col -4 -> 0 * abs(col) <= row
1   *** for col -4 -> 1
2  ***** for col -4 -> 2
3 ******* for col -4 -> 3
4********* for col -4 -> 4
5432101234
*/