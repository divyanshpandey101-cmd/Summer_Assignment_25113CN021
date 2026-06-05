// Write a program to Print Armstrong numbers in a range 
#include <stdio.h>
#include <math.h>
int main() {    
int start, end, num, temp, remainder, digits, sum;
printf("Enter the starting number of the range: ");    
scanf("%d", &start);
printf("Enter the ending number of the range: ");    
scanf("%d", &end);
printf("Armstrong numbers between %d and %d are:\n", start, end);
for (num = start; num <= end; num++) {        
temp = num;        
digits = 0;        
sum = 0;
while (temp != 0) {            
digits++;            
temp /= 10;        
}
temp = num;
while (temp != 0) {            
remainder = temp % 10;            
sum += (int)pow(remainder, digits);            
temp /= 10;        
}
if (sum == num) {            
printf("%d\n", num);        
}    
}
    return 0;
}