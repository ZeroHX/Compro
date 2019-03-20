#include <stdio.h>
#include <string.h>
int main(){
    char c1[100], c2[100], txt[200];
    int num;
    scanf("%s %s %d",c1 ,c2 ,&num);
    for(int i = 2; i < num; i++){
        strcpy(txt, c1);
        strcat(txt, c2);
        strcpy(c1, c2);
        strcpy(c2, txt);
    }
    printf("%s", txt);
}