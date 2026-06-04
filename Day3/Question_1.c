/* Write a program to Check whether a number is prime */

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
=======
#include <stdio.h>

int main() {
    int num, i, prime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
        prime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }
    }
    if (isPrime)
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is not a Prime Number.\n", num);
    if (prime)
        printf("%d is a Prime Number\n", num);
    else
        printf("%d is Not a Prime Number\n", num);
    return 0;
}