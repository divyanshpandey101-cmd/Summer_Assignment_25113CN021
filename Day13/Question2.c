// Write a program to find sum and average of array
#include <stdio.h>
int main() {
    int count;
    printf("Enter the number of elements: ");
    scanf("%d", &count);
    int numbers[count];
    printf("Enter %d numbers:\n", count);
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }
    double average = (double)sum / count;
    printf("Sum of the numbers is: %d\n", sum);
    printf("Average of the numbers is: %.2f\n", average);
    return 0;
}