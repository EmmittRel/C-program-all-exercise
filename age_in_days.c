// Write a program to input age of a person and print in days with appropriate prompts using
#include <stdio.h>

int day(int age){
    int days;
    days=age*365;
    return days;
}

int main() {
    int age, days;
    printf("Enter your age:");
    scanf("%d", &age);
    days= day(age);
    printf("The age of person in days is %d.", days);
    return 0;
}