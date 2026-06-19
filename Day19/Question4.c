// Write a program to find diagonal sum
#include <stdio.h>
int main() {
    int size, i, j, sum = 0;
    int matrix[10][10];
    printf("Enter size of square matrix: ");
    scanf("%d", &size);
    printf("Enter elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}