// Write a program to count words in a sentence
#include <stdio.h>
int main() {
    char line[200];
    int i = 0, words = 0;
    printf("Enter a sentence: ");
    fgets(line, sizeof(line), stdin);
    while (line[i] != '\0') {
        if ((line[i] != ' ' && line[i] != '\n' && line[i] != '\t') &&
            (line[i+1] == ' ' || line[i+1] == '\n' || line[i+1] == '\t' || line[i+1] == '\0')) {
            words++;
        }
        i++;
    }
    printf("Word count: %d\n", words);
    return 0;
}