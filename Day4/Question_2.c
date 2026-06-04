// Write a program to find nth Fibonacci term 
#include <stdio.h>
int main() {    
int n, i;   
int first = 0, second = 1, fib = 0;
printf("Enter which term of the Fibonacci series you want: ");    
scanf("%d", &n);
if (n == 1) {       
fib = 0;    } 
else if (n == 2) {        
fib = 1;    } 
else {        
for (i = 3; i <= n; i++) {            
fib = first + second;            
first = second;            
second = fib;        }    
}
printf("The %dth term in the Fibonacci series is %d\n", n, fib);
return 0;
}