/*
Computer Programming : lab6-2
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    double m1[3][3], m2[3][3], m3[3][3], num;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%lf",&m1[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%lf",&m2[i][j]);
        }
    }
    printf("A x B\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%.2lf ", ((m1[i][0]*m2[0][j])+(m1[i][1]*m2[1][j])+(m1[i][2]*m2[2][j])));
        }
        printf("\n");
    }
}