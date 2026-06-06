/* Write a program to print reverse star pattern 
*****
****
***
**
*     */

#include <stdio.h>

void printStars(int count) {
    if (count == 0)
        return;
    printf("*");
    printStars(count - 1);
}
void printReversePattern(int currentRow, int totalRows) {
    if (currentRow > totalRows)
        return;
    printStars(totalRows - currentRow + 1);
    printf("\n");
    printReversePattern(currentRow + 1, totalRows);
}
int main() {
    int rows = 5;
    printReversePattern(1, rows);
    return 0;
}