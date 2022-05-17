//WAP to print quadratic equation using function

#include <stdio.h>
#include <math.h>

float root(float a, float b, float c){
    float discriminant,r1,r2;
    discriminant=b*b-4*a*c;
    r1=(-b+sqrt(discriminant))/(2*a);
    r2=(-b+sqrt(discriminant))/(2*a);
    return r1;
    return r2;
}

int main()
{
    float a,b,c,r1,r2;
    printf("Enter value of a,b,c:");
    scanf("%f %f %f", &a,&b,&c);
    r1= root(a,b,c);
    r2=root(a,b,c);
    printf("\nRoot1=%f \t Root2=%f",r1,r2);
    return 0;
}