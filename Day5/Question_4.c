// Write a program to Find largest prime factor 
#include <stdio.h>
int main() {
    int num, i, largest = 0, isPrime, j;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 2; i <= num; i++) {
        if (num % i == 0) {  // check if i is a factor
         
            isPrime = 1;
            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                if (i > largest) {
                    largest = i;
                }
            }
        }
    }
    if (largest > 0) {
        printf("Largest prime factor is %d\n", largest);
    } else {
        printf("No prime factors found.\n");
    }
    return 0;
}
