#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of students (N): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int reg_no;
        char name[50];
        float marks;
        char grade;

        printf("\n--- Entering details for Student %d ---\n", i);

        printf("Registration Number: ");
        scanf("%d", &reg_no);

        printf("Name: ");
        scanf(" %[^\n]", name);

        printf("Marks: ");
        scanf("%f", &marks);


        if (marks >= 70 && marks <= 100) {
            grade = 'A';
        } else if (marks >= 60) {
            grade = 'B';
        } else if (marks >= 50) {
            grade = 'C';
        } else if (marks >= 40) {
            grade = 'D';
        } else {
            gsrade = 'F';
        }


        char *status;
        if (marks >= 40) {
            status = "Passed";
        } else {
            status = "Failed";
        }

        printf("\n----------------------------\n");
        printf("     STUDENT INFORMATION    \n");
        printf("----------------------------\n");
        printf("Registration No: %d\n", reg_no);
        printf("Name: %s\n", name);
        printf("Marks: %.2f\n", marks);
        printf("Grade: %c\n", grade);
        printf("Status: %s\n", status);
        printf("----------------------------\n");
    }

    return 0;
}
