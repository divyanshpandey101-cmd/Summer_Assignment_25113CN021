/* Write a program to print star pyramid
    *
   ***
  *****
 *******
*********  */

#include <stdio.h>

void printChars(char ch, int count) {
    if (count == 0)
        return;
    printf("%c", ch);
    printChars(ch, count - 1);
}
void printStarPyramid(int currentRow, int totalRows) {
    if (currentRow > totalRows)
        return;