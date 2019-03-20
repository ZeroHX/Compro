/*
Computer Programming : hw3-1
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <math.h>
int main(){
    float cost, center, height;
    scanf("%f%f%f",& cost ,& center ,& height);

    float vol = height*3.14159265359* pow(center/2, 2);
    printf("Volume : %.2fml\n", vol);
    printf("Baht/ml : %.4f", cost/vol);
}