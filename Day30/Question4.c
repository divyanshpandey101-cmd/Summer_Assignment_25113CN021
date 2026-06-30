// Write a program to Develop complete mini project using arrays, strings and functions

// Student grade management system
#include <stdio.h>
#include <string.h>
#define MAX 50
void inputData(int n, char names[][30], int ids[], int marks[][5]);
void calcAverage(int n, int marks[][5], float avg[]);
void displayData(int n, char names[][30], int ids[], float avg[]);
int main() {
    int n;
    char names[MAX][30];
    int ids[MAX];
    int marks[MAX][5];
    float avg[MAX];
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); // clear newline from input buffer
    inputData(n, names, ids, marks);
    calcAverage(n, marks, avg);
    displayData(n, names, ids, avg);
    return 0;
}
void inputData(int n, char names[][30], int ids[], int marks[][5]) {
    int i, j;
    for(i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], 30, stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // remove trailing newline

        printf("Enter ID of student %d: ", i + 1);
        scanf("%d", &ids[i]);

        printf("Enter 5 marks for student %d: ", i + 1);
        for(j = 0; j < 5; j++) {
            scanf("%d", &marks[i][j]);
        }
        getchar(); // clear newline after numbers
    }
}
void calcAverage(int n, int marks[][5], float avg[]) {
    int i, j;
    for(i = 0; i < n; i++) {
        int sum = 0;
        for(j = 0; j < 5; j++) {
            sum += marks[i][j];
        }
        avg[i] = sum / 5.0f;
    }
}
void displayData(int n, char names[][30], int ids[], float avg[]) {
    int i;
    printf("\nStudent Results:\n");
    for(i = 0; i < n; i++) {
        printf("Name: %s, ID: %d, Average: %.2f\n", names[i], ids[i], avg[i]);
    }
}