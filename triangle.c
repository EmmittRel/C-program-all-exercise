// Write a program to read base & altitude of a traingle & print its area using function
//By pramit

#include <stdio.h>

int area(int base, int altitude){
int a;
a=base*altitude/2;
return a;
}

int main() {
    int base, altitude, a;
    base=4;
    altitude=8;
    a=area(base,altitude);
    printf("It's area is %d.", a);
    return 0;
}