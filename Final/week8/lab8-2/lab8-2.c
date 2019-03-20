#include <stdio.h>
#include <ctype.h>
#include <string.h>
struct Record{
    char name[60], sur[60], gender[7], id[12];
    float grade;
    int age;
};
int main(){
    struct Record rec[20];
    char act[8];
    for(int i = 0; i < 20; i++){
        scanf("%s %s %s %d %s %f", rec[i].name, rec[i].sur, rec[i].gender, &rec[i].age, rec[i].id, &rec[i].grade);
    }
    scanf("%s", act);
    for(int i = 0; i < strlen(act); i++){
        act[i] = tolower(act[i]);
    }
    struct Record group;
    for(int i = 0; i < 19; i++){
        for(int j = i+1; j < 20; j++){
            if(!(strcmp(act,"name"))){
                if(strcmp(rec[i].name, rec[j].name) > 0){
                    group = rec[i];
                    rec[i] = rec[j];
                    rec[j] = group;
                }
            }
            else if(!(strcmp(act,"surname"))){
                if(strcmp(rec[i].sur, rec[j].sur) > 0){
                    group = rec[i];
                    rec[i] = rec[j];
                    rec[j] = group;
                }
            }
            else if(!(strcmp(act,"id"))){
                if(strcmp(rec[i].id, rec[j].id) > 0){
                    group = rec[i];
                    rec[i] = rec[j];
                    rec[j] = group;
                }
            }
        }
    }
    for(int i = 0; i < 20; i++){
        if(!(strcmp(rec[i].gender,"Male"))) printf("Mr ");
        else printf("Miss ");
        printf("%c %s (%d) ID: %s GPA %.2f\n",rec[i].name[0], rec[i].sur, rec[i].age, rec[i].id, rec[i].grade);
    }
}