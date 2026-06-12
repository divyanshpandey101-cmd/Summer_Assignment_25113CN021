// Write a program to write functionfor fibonacci

#include <stdio.h>
void printFibonacci(int n) {
    int a = 0, b = 1, next;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}
int main() {
    int count;
    printf("How many Fibonacci numbers would you like to see? ");
    scanf("%d", &count);
    printFibonacci(count);
    return 0;
}