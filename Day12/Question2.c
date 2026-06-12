// Write a program to write function for armstrong

#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }
    return (sum == originalNum);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}