#include <stdio.h>
#include <stdlib.h>

#define NUM_CLASS_LEVELS 5
#define NUM_MAJORS 7

int main() {
    int students[NUM_CLASS_LEVELS][NUM_MAJORS];
    int total_students[NUM_CLASS_LEVELS] = {0};
    int total_majors[NUM_MAJORS] = {0};
    int i, j;


    for (i = 0; i < NUM_CLASS_LEVELS; i++) {
        for (j = 0; j < NUM_MAJORS; j++) {
            students[i][j] = 0;
        }
    }


    int num_students;
    int class_level;
    int major;
    for (i = 0; i < 1200; i++) {
        printf("Enter class level (1-5) and major (1-7) for student %d: ", i+1);
        scanf("%d %d", &class_level, &major);
        while (class_level < 1 || class_level > 5 || major < 1 || major > 7) {
            printf("Invalid input. Enter class level (1-5) and major (1-7) for student %d: ", i+1);
            scanf("%d %d", &class_level, &major);
        }
        students[class_level-1][major-1]++;
        total_students[class_level-1]++;
        total_majors[major-1]++;
    }

    
    printf("\nNumber of students in each class level:\n");
    for (i = 0; i < NUM_CLASS_LEVELS-1; i++) {
        printf("Level %d: %d\n", i+1, total_students[i]);
    }
    printf("Graduate: %d\n", total_students[NUM_CLASS_LEVELS-1]);

    
    printf("\nNumber of students in each major:\n");
    for (i = 0; i < NUM_MAJORS; i++) {
        printf("Major %d: %d\n", i+1, total_majors[i]);
    }

    
    printf("\nNumber of students in each major for each class level:\n");
    for (i = 0; i < NUM_CLASS_LEVELS; i++) {
        printf("Level %d:\n", i+1);
        for (j = 0; j < NUM_MAJORS; j++) {
            printf("Major %d: %d\n", j+1, students[i][j]);
        }
    }

    return 0;
}
