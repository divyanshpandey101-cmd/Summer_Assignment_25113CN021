// Write a program to find x^n without pow() 
#include <stdio.h>
int main() {
    int base, exponent;
    int result = 1;
    printf("Enter the base (x): ");
    scanf("%d", &base);
    printf("Enter the exponent (n): ");
    scanf("%d", &exponent);
    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }
    printf("%d raised to the power %d is %d\n", base, exponent, result);
    return 0;
}