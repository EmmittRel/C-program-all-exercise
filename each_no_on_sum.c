// Write a program to input four numbers and print percentages of each numbers on their sum.
#include <stdio.h>

int addition(float a, float b, float c, float d){
    int sum;
    sum=a+b+c+d;
    return sum;
}
int a_p(float a, float sum){
    int a_per;
    a_per=a/sum*100;
}
int b_p(float b, float sum){
    int b_per;
    b_per=b/sum*100;
}
int c_p(float c, float sum){
    int c_per;
    c_per=c/sum*100;
}
int d_p(float d, float sum){
    int d_per;
    d_per=d/sum*100;
}

int main() {
    float a, b, c, d, sum, a_per, b_per, c_per, d_per;
    printf("Enter 1st number:");
    scanf("%f", &a);
    printf("Enter 2nd number:");
    scanf("%f", &b);
    printf("Enter 3rd number:");
    scanf("%f", &c);
    printf("Enter 4th number:");
    scanf("%f", &d);
    sum=addition(a,b,c,d);
    a_per=a_p(a,sum);
    b_per=b_p(b,sum);
    c_per=c_p(c,sum);
    d_per=d_p(d,sum);
    printf("Percentage of 1st number is %.3f.", a_per);
    printf("\nPercentage of 2nd number is %.3f.", b_per);
    printf("\nPercentage of 3rd number is %.3f.", c_per);
    printf("\nPercentage of 4th number is %.3f.", d_per);
    return 0;
}