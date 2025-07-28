#include <stdio.h>

int main() {
    const int TOTAL_EXAMS = 3;
    const float PASSING_AVERAGE = 75.0;
    const int GRADE_A = 90;
    const int GRADE_B = 80;
    const int GRADE_C = 75;

    int student1_score1 = 85;
    int student1_score2 = 92;
    int student1_score3 = 88;
    float student1_average = (student1_score1 + student1_score2 + student1_score3) / 3.0;
    char student1_grade = 'B';
    char student1_status[7] = "Passed";

    int student2_score1 = 70;
    int student2_score2 = 65;
    int student2_score3 = 60;
    float student2_average = (student2_score1 + student2_score2 + student2_score3) / 3.0;
    char student2_grade = 'D';
    char student2_status[7] = "Failed";

    int student3_score1 = 95;
    int student3_score2 = 97;
    int student3_score3 = 96;
    float student3_average = (student3_score1 + student3_score2 + student3_score3) / 3.0;
    char student3_grade = 'A';
    char student3_status[7] = "Passed";

    printf("===== Exam Performance Report =====\n\n");

    printf("Student 1:\n");
    printf("Scores         : %d, %d, %d\n", student1_score1, student1_score2, student1_score3);
    printf("Average        : %.2f\n", student1_average);
    printf("Letter Grade   : %c\n", student1_grade);
    printf("Status         : %s\n\n", student1_status);

    printf("Student 2:\n");
    printf("Scores         : %d, %d, %d\n", student2_score1, student2_score2, student2_score3);
    printf("Average        : %.2f\n", student2_average);
    printf("Letter Grade   : %c\n", student2_grade);
    printf("Status         : %s\n\n", student2_status);

    printf("Student 3:\n");
    printf("Scores         : %d, %d, %d\n", student3_score1, student3_score2, student3_score3);
    printf("Average        : %.2f\n", student3_average);
    printf("Letter Grade   : %c\n", student3_grade);
    printf("Status         : %s\n\n", student3_status);
    printf("===================================\n\n\n\n\n\n");

    return 0;
}