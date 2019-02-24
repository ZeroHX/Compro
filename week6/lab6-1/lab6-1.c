/*
Computer Programming : lab6-1
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <string.h>
int main(){
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int num, count_n = 0, count_m = 0;
    do{
        scanf("%d",&num);
    }
    while(num<1 || num > 20);
    for(int i = 0; i< 8; i++){ //Check M
        if(M[i] == num) {
            printf("%d is in M at index [%d]", num, i);
            break;
        }
        else count_m++;
    }
    for(int j = 0; j < 7; j++){
        if(N[j] == num) {
            printf("%d is in N at index [%d]", num, j);
            break;
        }
        else count_n++;
    }
    if(count_n + count_m == 15) printf("%d is not in neither M nor N",num);
}