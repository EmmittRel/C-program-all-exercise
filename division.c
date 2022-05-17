// WAP to divide two numbers using function with no arguments and no return value
// By pramit

#include <stdio.h>

void division()
{
    float a,b,divide;
    printf("Enter two numbers:");
    scanf("%f %f",&a,&b);
    divide=a/b;
    printf("The division is: %.2f", divide);
}
int main()
{
    division();
    return 0;
}