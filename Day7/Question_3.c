// Write a program to Recursive sum of digits 
#include <stdio.h>
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0) {
        number = -number; // Convert negative number to positive
    }
    int result = sumOfDigits(number);
    printf("Sum of digits is %d\n", result);
    return 0;
}