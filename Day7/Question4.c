// Write a program to recursive reverse number
#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}
int main() {
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Please enter a non-negative number.\n");
    } else {
        int reversed = reverseNumber(number, 0);
        printf("Reversed number of %d is %d\n", number, reversed);
    }
    return 0;
}