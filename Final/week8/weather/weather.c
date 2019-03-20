#include <stdio.h>
#include <string.h>
void playing_decision();
struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};
void playing_decision(struct Weather w){
    if(!(strcmp(w.outlook,"overcast")) || !(strcmp(w.outlook,"rain")) && w.wind == 70 || !(strcmp(w.outlook,"sunny")) && w.humidity <= 77.5){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
}
int main(){
    int num;
    scanf("%d",&num);
    struct Weather w[num];
    for(int i = 0; i < num; i++){
        scanf("%s %d %d %c",w[i].outlook, &w[i].temperature, &w[i].humidity,&w[i].wind);
        playing_decision(w[i]);
    }

}