/* Write a program to find Factorial of a number */

#include<stdio.h>

int main() {
    int num;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        factorial *= i;
    }

    // Display result
    printf("Factorial of %d = %lld\n", num, factorial);

    return 0;
}