// Write a program to check perfect number 
#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter a number to check if it's perfect: ");
    scanf("%d", &num);
    // Add all divisors of num except itself
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}