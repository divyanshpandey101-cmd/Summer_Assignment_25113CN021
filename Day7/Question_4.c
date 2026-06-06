// Write a program to Recursive reverse number 
#include <stdio.h>
int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    } else {
        rev = rev * 10 + (n % 10);
        return reverseNumber(n / 10, rev);
    }
}
int main() {
    int number;
    printf("Enter a number to reverse: ");
    scanf("%d", &number);
    int reversed = reverseNumber(number, 0);
    printf("Reversed number is %d\n", reversed);
    return 0;
}