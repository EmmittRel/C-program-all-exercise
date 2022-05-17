// Write a program to read the radius of sphere and compute its surface area and volume using function
//By pramit

#include <stdio.h>
#define PI 3.14

float area(float r){
    return (4.0*PI*r*r);
}

float volume(float r){
    return (4.0/3*PI*r*r*r);
}

int main() {
    float r, a, v;
    printf("Enter the value of r:");
    scanf("%f", &r);
    a=area(r);
    v=volume(r);
    printf("The area of sphere is %.3f.", a);
    printf("\nThe volume of sphere is %.3f.", v);
    return 0;
}