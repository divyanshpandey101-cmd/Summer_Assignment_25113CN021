// Write a program to create mumber guessing game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int n, g, t = 0;
    srand(time(0));
    n = rand() % 100 + 1;
    printf("Guess a number between 1 and 100:\n");
    do {
        scanf("%d", &g);
        t++;
        if (g > n)
            printf("Lower\n");
        else if (g < n)
            printf("Higher\n");
        else
            printf("Correct! You guessed in %d tries.\n", t);
    } while (g != n);
    return 0;
}