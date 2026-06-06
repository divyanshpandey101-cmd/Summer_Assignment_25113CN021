/* Write a program to print repeated number pattern 
1
22
333
4444
55555 */

#include <stdio.h>

void printRepeatedNumber(int number, int count) {
    if (count == 0)
        return;
    printf("%d", number);
    printRepeatedNumber(number, count - 1);
}
void printRepeatedNumberPattern(int currentRow, int totalRows) {
    if (currentRow > totalRows)
        return;
    printRepeatedNumber(currentRow, currentRow);
    printf("\n");
    printRepeatedNumberPattern(currentRow + 1, totalRows);
}
int main() {
    int rows = 5;
    printRepeatedNumberPattern(1, rows);
    return 0;
}