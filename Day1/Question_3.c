#include<stdio.h>

int main() {
    int num;
    long long factorial = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial
    for(int i = 1; i <= num; i++) {
        factorial *= i;
    }

    // Display result
    printf("Factorial of %d = %lld\n", num, factorial);

    return 0;
}