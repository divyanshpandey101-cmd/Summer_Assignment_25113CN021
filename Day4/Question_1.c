// Write a program to generate Fibonacci series
#include <stdio.h>
int main() {    int n, i;   
 int first = 0, second = 1, next;
printf("Enter how many Fibonacci numbers you want: "); 
scanf("%d", &n);
printf("Fibonacci series: ");
for (i = 0; i < n; i++) 
{        
if (i <= 1)            
next = i;  // first two numbers are 0 and 1        
else {
next = first + second;            
first = second;  
second = next;        }        
printf("%d ", next);    }
printf("\n");
return 0;
}