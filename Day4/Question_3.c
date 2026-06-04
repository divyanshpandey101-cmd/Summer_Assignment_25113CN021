// Write a program to Check armstrong number 
#include <stdio.h>
#include <math.h>
int main() {    
int num, originalNum, remainder, digits = 0;    
int result = 0;
printf("Enter a number: ");    
scanf("%d", &num);
    
originalNum = num;   
 while (originalNum != 0)
{        
 digits++;        
 originalNum /= 10;    
}
 originalNum = num;
 while (originalNum != 0) {       
 remainder = originalNum % 10;        
 result += (int)pow(remainder, digits);        
 originalNum /= 10;    }
 if (result == num) {        
 printf("%d is an Armstrong number.\n", num);    } 
 else {        
 printf("%d is not an Armstrong number.\n", num);   
 }
    return 0;
}