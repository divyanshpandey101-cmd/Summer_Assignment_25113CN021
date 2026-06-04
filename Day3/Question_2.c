#include <stdio.h>

int main() {
<<<<<<< Updated upstream
    int start, end, i, j, isPrime;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
=======
    int start, end, i, j, prime;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
>>>>>>> Stashed changes
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i < 2)
            continue;

<<<<<<< Updated upstream
        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
=======
        prime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0;
>>>>>>> Stashed changes
                break;
            }
        }

<<<<<<< Updated upstream
        if (isPrime)
=======
        if (prime)
>>>>>>> Stashed changes
            printf("%d ", i);
    }

    return 0;
}