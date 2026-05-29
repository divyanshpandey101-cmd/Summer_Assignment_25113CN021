#include <stdio.h>

int main() {
    int number, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while(number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    if(original == reverse)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}