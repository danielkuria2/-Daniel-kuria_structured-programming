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
        int mark_range;

        printf("Registration Number: ");
        scanf("%d", &reg_no);

        printf("Name: ");
        scanf(" %[^\n]", name);

        printf("Marks: ");
        scanf("%f", &marks);

        mark_range = (int)marks / 10;

        switch (mark_range) {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;
            case 6:
                grade = 'B';
                break;
            case 5:
                grade = 'C';
                break;
            case 4:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }


        char *status;
        switch (grade) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
                status = "Passed";
                break;
            case 'F':
                status = "Failed";
                break;
            default:
                status = "Unknown";
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
