// Write a program to create quiz application
#include <stdio.h>
int main() {
    int s = 0, a;
    printf("Quiz Time! Answer with the option number.\n");
    printf("1) What is 2+2?\n1) 3\n2) 4\n3) 5\n");
    scanf("%d", &a);
    if (a == 2) s++;
    printf("2) What is capital of France?\n1) Berlin\n2) Paris\n3) Rome\n");
    scanf("%d", &a);
    if (a == 2) s++;
    printf("3) Which color is a banana?\n1) Red\n2) Yellow\n3) Blue\n");
    scanf("%d", &a);
    if (a == 2) s++;
    printf("Your score: %d out of 3\n", s);
    return 0;
}