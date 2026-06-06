/* Write a program to print hollow square pattern
*****
*   *
*   *
*   *
*****  */

#include <stdio.h>

void printRow(int currentCol, int totalCols, int currentRow, int totalRows) {
    if (currentCol > totalCols) {
        printf("\n");
        return;
    }
    if (currentRow == 1 || currentRow == totalRows || currentCol == 1 || currentCol == totalCols)
        printf("*");
    else
        printf(" ");
    printRow(currentCol + 1, totalCols, currentRow, totalRows);
}
void printSquare(int currentRow, int totalRows) {
    if (currentRow > totalRows)
        return;
    printRow(1, totalRows, currentRow, totalRows);
    printSquare(currentRow + 1, totalRows);
}
int main() {
    int size = 5;
    printSquare(1, size);
    return 0;
}