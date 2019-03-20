#include <stdio.h>
#include <string.h>
int main(){
    char name[60], sur[60], gender[6], id[12];
    int age;
    float grade;
    scanf("%s %s %s %d %s %f",name,sur,gender,&age,id,&grade);
    if(strcmp(gender, "Male") == 0){
        printf("Mr %c %s (%d) ID: %s GPA %.2f", name[0], sur, age, id, grade);
    }
    else{
        printf("Miss %c %s (%d) ID: %s GPA %.2f", name[0], sur, age, id, grade);
    }

}