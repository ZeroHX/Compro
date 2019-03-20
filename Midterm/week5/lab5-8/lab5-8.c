/*
Computer Programming : hw5-8
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, age, height, weight;
    float avg1 = 0, avg2 = 0, avg3 = 0;
    for(int i = 0; i < 50; i++){
        scanf("%d %d %d",&age ,&height ,&weight);
        if (age >= 20 && height >= 160)
            num1++;
        if (age < 20 && (height <= 180 || weight >= 60))
            num2++;
        if (age >= 30 && (weight >= 40 && weight <= 80))
            num3++;
        if (age < 40 && (weight < 85 || height <= 200))
            num4++;
        avg1 += age; avg2 += height; avg3 += weight;
    }
    printf("Age >= 20 and Height >= 160: %d\n", num1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", num2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", num3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", num4);
    printf("Average Age: %.0f\n", avg1/50);
    printf("Average Height: %.2f\n", avg2/50);
    printf("Average Weight: %.2f\n", avg3/50);
}