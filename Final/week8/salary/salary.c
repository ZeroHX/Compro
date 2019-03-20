#include <stdio.h>
#include <string.h>
struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};
int main(){
    int num;
    char find[10];
    scanf("%d",&num);
    struct Record rec[num];
    for(int i = 0; i < num; i++){
        scanf("%s %s %ld %ld", rec[i].id, rec[i].name, &rec[i].salary, &rec[i].sales);
    }
    scanf("%s",find);
    for(int i = 0; i < num; i++){
        if(!(strcmp(find,rec[i].id))){
            printf("%s\n",rec[i].id);
            printf("%s\n",rec[i].name);
            printf("%ld\n",rec[i].sales);
            printf("%.2lf\n",(rec[i].sales*0.02));
            printf("%.2ld\n",rec[i].salary);
            printf("%.2lf\n",rec[i].salary+(rec[i].sales*0.02));
            return 0;
        }
    }
    printf("ID not found !!!");

}