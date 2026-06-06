/* Write a program to print number triangle
1
12
123
1234
12345 */

#include <stdio.h>

void printNumbers(int count) {
    if (count == 0)
        return;
    printNumbers(count - 1);
    printf("%d", count);
}
void printTriangle(int currentRow, int totalRows) {
    if (currentRow > totalRows)
        return;
    printNumbers(currentRow);
    printf("\n");
    printTriangle(currentRow + 1, totalRows);
}
int main() {
    int rows;
    printf("Enter how many rows you want: ");
    scanf("%d", &rows);
    if (rows <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        printTriangle(1, rows);
    }
    return 0;
}