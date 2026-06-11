// Write a program to write function to find sum of two numbers

#include <stdio.h>
int addTwoNumbers(int num1, int num2) {
    return num1 + num2;
}
int main() {
    int a, b, sum;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    sum = addTwoNumbers(a, b);
    printf("The sum of %d and %d is %d.\n", a, b, sum);
    return 0;
}