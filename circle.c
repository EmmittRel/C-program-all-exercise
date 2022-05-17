//WAP to print area and circumference of circle using function
//By Pramit

#include <stdio.h>
#define PI 3.14


float circum(float r){
 return (2*PI*r);
}

float area(float r)
{
    return (PI*r*r);
   
}

int main()
{
    float r, a, c;
    printf("Enter value of r:");
    scanf("%f",&r);
    c = circum(r);
    a = area(r);
    printf("Circumference of circle is:%.2f\n",c);
    printf("Area of circle is:%.2f",a);

    return 0;
}