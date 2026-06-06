/* Write a program to print repeated character pattern 

A
BB
CCC
DDDD
EEEEE  */

#include <stdio.h>

void printChars(char ch, int count) {
    if (count == 0)
        return;
    printf("%c", ch);
    printChars(ch, count - 1);
}
void printPattern(int currentRow, int totalRows) {
    if (currentRow > totalRows)
        return;
    printChars('A' + currentRow - 1, currentRow);
    printf("\n");
    printPattern(currentRow + 1, totalRows);
}
int main() {
    int rows = 5;
    printPattern(1, rows);
    return 0;
}