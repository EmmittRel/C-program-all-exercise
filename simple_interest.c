// Write a program to print simple interest using function
//By pramit

#include <stdio.h>

int simpleinterest(int P, int r, int n){
    int SI;
    SI= P*n*r/100;
    return SI;
}

int main() {
    int SI, P, r, n;
    printf("Enter deposit amount:");
    scanf("%d", &P);
    printf("Enter years:");
    scanf("%d", &n);
    printf("Enter rate of interest:");
    scanf("%d", &r);
    SI= simpleinterest(P, r, n);
    printf("Simple Interest amount is %d.", SI);
    return 0;
}