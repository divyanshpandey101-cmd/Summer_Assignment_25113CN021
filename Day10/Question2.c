/* Write a program to print reverse star pyramid 
*********
 *******
  *****
   ***
    *   */

#include <stdio.h>

void printStars(int count) {
    if (count == 0)
        return;
    printf("*");
    printStars(count - 1);
}
void printSpaces(int count) {
    if (count == 0)
        return;
    printf(" ");
    printSpaces(count - 1);
}
void printReversePyramid(int row, int totalRows) {
    if (row > totalRows)
        return;
    printSpaces(row - 1);
    printStars(2 * (totalRows - row) + 1);
    printf("\n");
    printReversePyramid(row + 1, totalRows);
}
int main() {
    int rows = 5;
    printReversePyramid(1, rows);
    return 0;
}