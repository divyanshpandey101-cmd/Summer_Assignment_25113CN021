// Write a program to subtract matrices
#include <stdio.h>
int main() {
    int row, col, i, j;
    int matrix1[10][10], matrix2[10][10], diff[10][10];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printf("Difference of matrices:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}