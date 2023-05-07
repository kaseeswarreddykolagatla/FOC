#include <stdio.h>

#define MAX_CLASS_SIZE 35
#define NUM_QUESTIONS 20

int main() {
    int correct_scores[NUM_QUESTIONS];
    int student_ids[MAX_CLASS_SIZE];
    int num_correct[MAX_CLASS_SIZE];
    char grades[MAX_CLASS_SIZE];
    int highest_score = 0;

    printf("Enter correct answers for the test (20 true/false):\n");
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        scanf("%d", &correct_scores[i]);
    }


    printf("Enter student IDs and answers (true/false):\n");
    for (int i = 0; i < MAX_CLASS_SIZE; i++) {
        int id, num_correct_ans;
        printf("Student %d: ", i+1);
        scanf("%d", &id);
        student_ids[i] = id;
        num_correct_ans = 0;
        for (int j = 0; j < NUM_QUESTIONS; j++) {
            int ans;
            scanf("%d", &ans);
            if (ans == correct_scores[j]) {
                num_correct_ans++;
            }
        }
        num_correct[i] = num_correct_ans;
        if (num_correct_ans > highest_score) {
            highest_score = num_correct_ans;
        }
        if (num_correct_ans >= highest_score-2) {
            grades[i] = 'A';
        } else if (num_correct_ans >= highest_score-4) {
            grades[i] = 'B';
        } else if (num_correct_ans >= highest_score-6) {
            grades[i] = 'C';
        } else if (num_correct_ans >= highest_score-8) {
            grades[i] = 'D';
        } else {
            grades[i] = 'F';
        }
    }

    
    printf("\nStudent results:\n");
    for (int i = 0; i < MAX_CLASS_SIZE; i++) {
        printf("ID: %d\tNumber correct: %d\tGrade: %c\n", student_ids[i], num_correct[i], grades[i]);
    }
    printf("\nHighest score for the class: %d\n", highest_score);

    return 0;
}
