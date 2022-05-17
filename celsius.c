// Write a program to input temperature in celsius & print its fahrenheit equivalent.
#include <stdio.h>

float faren(float celsius){
    float farenheit;
    farenheit=(celsius*1.8)+32;
    return farenheit;
}

int main() {
    float celsius, farenheit;
    printf("Enter temperature in celsuis:");
    scanf("%f", &celsius);
    farenheit=faren(celsius);
    printf("Farenheit equivalent is %f.", farenheit);
    return 0;
}