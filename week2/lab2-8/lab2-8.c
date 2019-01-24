/*
Computer Programming : lab2-8
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    char name[31], last[31], id[9];
    int date, day, month, year;
    float gpa;
    scanf("%s%s%s", name, last, id);
    scanf("%d/%d/%d",& day,& month,&year);
    scanf("%f",& gpa);
    printf("Fullname: %s %s\n", name, last);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%d\n",day, month, year);
    printf("GPA: %.2f", gpa);
}