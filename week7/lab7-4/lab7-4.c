/*
Computer Programming : lab7-4
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <ctype.h>
double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);
int main(){
    double degree;
    char unit;
    scanf("%lf %c",&degree,&unit);
    unit = tolower(unit);
    switch(unit){
        case 'f': fahrenheitToCelcius(degree);break;
        case 'c': celsiusToFahrenheit(degree);break;
    }
}
double celsiusToFahrenheit(double celcius){
    printFarenheit((32 + celcius*(180.0/100.0)));
}
double fahrenheitToCelcius(double fahrenheit){
    printCelcius(((fahrenheit-32)/(180.0/100.0)));
}
void printFarenheit(double fahrenheit){
    printf("%.2lf f", fahrenheit);
}
void printCelcius(double celcius){
    printf("%.2lf c", celcius);
}