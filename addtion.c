// WAP to add two number
// By Pramit

#include <stdio.h>

int addition(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}

int main(){
    int a,b,sum;
    printf("Enter two values:");
    scanf("%d %d", &a, &b);
    sum=addition(a,b);
    printf("\nThe sum is: %d", sum);
    return 0;
}