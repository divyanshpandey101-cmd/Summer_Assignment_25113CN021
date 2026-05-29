#include <stdio.h>

int main() {
    int num, count = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Count digits
    while(num != 0) {
        num = num / 10;
        count++;
    }

    // Display result
    printf("Number of digits = %d\n", count);

    return 0;
}