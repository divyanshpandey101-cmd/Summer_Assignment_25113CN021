// Write a program to transpose matrix
#include <stdio.h>
int main() {
    int row, col, i, j;
    int matrix[10][10], trans[10][10];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);
    printf("Enter elements of matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            trans[j][i] = matrix[i][j];
        }
    }
    printf("Transposed matrix:\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}