// Write a program to count even and odd elements
#include <stdio.h>
int main() {
    int count;
    printf("Enter the total number of elements: ");
    scanf("%d", &count);
    int numbers[count];
    printf("Enter %d numbers:\n", count);
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < count; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Count of even numbers: %d\n", evenCount);
    printf("Count of odd numbers: %d\n", oddCount);
    return 0;
}