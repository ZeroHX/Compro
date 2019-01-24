/*
Computer Programming : lab2-9
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    char name[30], last[30], full1[60], full2[60];
    scanf("%s%s", name, last);
    scanf(" %[^\n]", full1);
    scanf(" %[^\n]", full2);
    printf("Person 1: %s %s\n", name, last);
    printf("Person 2: %s\n", full1);
    printf("Person 3: %s", full2);
}