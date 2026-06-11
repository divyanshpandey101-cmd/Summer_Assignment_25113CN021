/* Write a program to print star pyramid
    *
   ***
  *****
 *******
*********  */

#include <stdio.h>

void printChars(char ch, int count) {
    if (count <= 0) {
        return;
    }
    printf("%c", ch);
    printChars(ch, count - 1);
}
void printStarPyramid(int currentRow, int totalRows) {
    if (currentRow > totalRows) {
        return;
    }
    int spaces = totalRows - currentRow;
    printChars(' ', spaces);
    int stars = (2 * currentRow) - 1;
    printChars('*', stars);
    printf("\n");
    printStarPyramid(currentRow + 1, totalRows);
}
int main() {
    int totalRows = 5;
    printStarPyramid(1, totalRows);
    return 0;
}
