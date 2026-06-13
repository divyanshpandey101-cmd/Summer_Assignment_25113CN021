//  Write a program to find largest and smallest element
#include <stdio.h>
int main() {
    int count;
    printf("How many numbers will you enter? ");
    scanf("%d", &count);
    int numbers[count];
    printf("Please enter %d numbers:\n", count);
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }
    int largest = numbers[0];
    int smallest = numbers[0];
    for (int i = 1; i < count; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);
    return 0;
}