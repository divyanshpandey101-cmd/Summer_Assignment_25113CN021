// Write a program to print half pyramid pattern
#include <stdio.h>

void printStars(int count) {
    if (count == 0)
        return;
    printf("*");
    printStars(count - 1);
}
void printPyramid(int currentRow, int totalRows) {
    if (currentRow > totalRows)
        return;
    printStars(currentRow);
    printf("\n");
    printPyramid(currentRow + 1, totalRows);
}
int main() {
    int rows;
    printf("Enter how many rows you want: ");
    scanf("%d", &rows);
    if (rows <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        printPyramid(1, rows);
    }
    return 0;
}