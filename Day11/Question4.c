// Write a program to write function to find factorial
#include <stdio.h>
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("The factorial of %d is %lld.\n", n, factorial(n));
    return 0;
}