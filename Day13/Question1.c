// Write a program to Input and display array
#include <stdio.h>
int main() {
    int count;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &count);
    int numbers[count];
    printf("Please enter %d numbers:\n", count);
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("You entered:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}