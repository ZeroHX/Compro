/*
Computer Programming : lab5-6
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    int time;
    double num1, num2, max = 0, min = 10, avg;
    scanf("%d",&time);
    printf("%d Values\n", time);
    for(int i = 0; i<time; i++){
        scanf("%lf %lf",&num1 ,&num2);
        avg += num1+num2;
        if(num1 > num2 && num1 > max){
            max = num1;
        }
        if(num2 > num1 && num2 > max){
            max = num2;
        }
        if(num1 < num2 && num1 < min){
            min = num1;
        }
        if(num2 < num1 && num2 < min){
            min = num2;
        }
        i++;
    }
    printf("Min: %.3lf\n", min);
    printf("Max: %.3lf\n", max);
    printf("Avg: %.2lf", avg/time);
}