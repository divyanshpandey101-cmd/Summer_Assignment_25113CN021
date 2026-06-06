/* Write a program to print character triangle 
A
AB
ABC
ABCD
ABCDE */

#include <stdio.h>

void printChars(char ch, char lastChar) {
    if (ch > lastChar)
        return;
    printf("%c", ch);
    printChars(ch + 1, lastChar);
}
void printCharTriangle(int currentRow, int totalRows) {
    if (currentRow > totalRows)
        return;
    printChars('A', 'A' + currentRow - 1);
    printf("\n");
    printCharTriangle(currentRow + 1, totalRows);
}
int main() {
    int rows = 5;
    printCharTriangle(1, rows);
    return 0;
}