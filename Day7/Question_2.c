// Write a program to Recurive Fibonacci 
#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int number;
    printf("Enter the position in Fibonacci sequence: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        int result = fibonacci(number);
        printf("Fibonacci number at position %d is %d\n", number, result);
    }
    return 0;
}