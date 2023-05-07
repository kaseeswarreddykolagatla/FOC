#include <stdio.h>
#include <string.h>

#define SIZE 10

int main() {
    char nameArray[SIZE][20];
    int scoreArray[SIZE][4];
    char studentName[20];
    int i, j;
    int foundName = 0;

    
    strcpy(nameArray[0], "Alice");
    scoreArray[0][0] = 90;
    scoreArray[0][1] = 85;
    scoreArray[0][2] = 92;
    scoreArray[0][3] = 87;

    strcpy(nameArray[1], "Bob");
    scoreArray[1][0] = 80;
    scoreArray[1][1] = 75;
    scoreArray[1][2] = 78;
    scoreArray[1][3] = 82;

    
    printf("Enter student name to search for: ");
    scanf("%s", studentName);

    
    for (i = 0; i < SIZE; i++) {
        if (strcmp(nameArray[i], studentName) == 0) {
            printf("Student Name: %s\n", nameArray[i]);
            for (j = 0; j < 4; j++) {
                printf("Test %d score: %d\n", j+1, scoreArray[i][j]);
            }
            foundName = 1;
            break;
        }
    }

    
    if (foundName == 0) {
        printf("Error: Student name not found\n");
    }

    return 0;
}
