/* Write a program to Calculate sum of first N natural numbers */

#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        sum += i;
    }

    // Display result
    printf("Sum of first %d natural numbers = %d\n", N, sum);
return 0;
}