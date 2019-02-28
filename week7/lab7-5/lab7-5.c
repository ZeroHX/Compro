/*
Computer Programming : lab7-5
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
double getValue();
double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size);
int main() {
    int n;
    scanf("%d", &n);

    double array[n];
    for (int i=0; i<n; ++i) {
        array[i] = getValue();
    }
    printf("%d Values\n", n);
    double min, max, avg;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);
    printf("Min: %.3lf\n", min);
    printf("Max: %.3lf\n", max);
    printf("Avg: %.3lf", avg);
}
double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}
double findMin(double array[], int n){
    double min = array[0];
    for(int i = 0; i < n; i++) if(array[i] < min) min = array[i];
    return min;
}
double findMax(double array[], int n){
    double max = array[0];
    for(int i = 0; i < n; i++) if(array[i] > max) max = array[i];
    return max;
}
double findAvg(double array[], int n){
    double avg = 0;
    for(int i = 0; i < n; i++) avg+=array[i];
    return (avg/n);
}