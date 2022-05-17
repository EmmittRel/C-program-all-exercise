//WAP to substract two numbers using function with argument but no return value
//By pramit

#include <stdio.h>

void substraction(int a, int b)
{
    int minus;
    minus=a-b;
    printf("The substraction of two number is: %d", minus);
}

int main()
{
    int a, b, minus;
    printf("Enter the two numbers:");
    scanf("%d %d", &a,&b);
    substraction(a,b);
    return 0;
}