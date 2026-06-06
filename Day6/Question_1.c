// Write a program to convert decimal to binary 
#include <stdio.h>
int main() {
    int decimalNumber;
    int binaryNumber[32]; 
    int i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    while (decimalNumber > 0) {
        binaryNumber[i] = decimalNumber % 2; 
        decimalNumber = decimalNumber / 2;    
        i++;                                
    }
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNumber[j]);
    }
    printf("\n");
    return 0;
}