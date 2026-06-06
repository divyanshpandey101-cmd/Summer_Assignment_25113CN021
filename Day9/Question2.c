/* Write a program to print reverse number triangle 
12345
1234
123
12
1  */

#include <stdio.h>

void printNumbers(int count) {
    if (count == 0)
        return;
    printf("%d", count);
    printNumbers(count - 1);
}
void printReverseTriangle(int currentRow, int totalRows) {
    if (currentRow > totalRows)
        return;
    printNumbers(totalRows - currentRow + 1);
    printf("\n");
    printReverseTriangle(currentRow + 1, totalRows);
}
int main() {
    int rows = 5;
    printReverseTriangle(1, rows);
    return 0;
}