// WAP to multiply two numbers and display product
// BY pramit

#include <stdio.h>

int multiply(int a, int b)
{
    int product;
    product=a*b;
    return product;
}

int main()
{
    int a, b, product;
    printf("Enter two values:");
    scanf("%d %d", &a, &b);
    product = multiply(a,b);
    printf("\nThe sum is: %d", product);
    return 0;
}