#include <stdio.h>
#include <string.h>
//void playing_decision(struct Weather wt_param[], int n);
struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};
//void playing_decision(struct Weather w){
void playing_decision(struct Weather wt_param[], int n){
    for(int i = 0; i < n ; i++){
        if(!(strcmp(wt_param[i].outlook,"overcast")) || !(strcmp(wt_param[i].outlook,"rain")) && wt_param[i].wind == 70 || !(strcmp(wt_param[i].outlook,"sunny")) && wt_param[i].humidity <= 77.5){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }

}
int main(){
    int num;
    scanf("%d",&num);
    struct Weather w[num];
    for(int i = 0; i < num; i++){
        scanf("%s %d %d %c",w[i].outlook, &w[i].temperature, &w[i].humidity,&w[i].wind);
    }
    playing_decision(w, num);

}