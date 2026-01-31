#include <stdio.h>

int main() {
    int choice;
    int maths, physics, biology, chemistry, english;
    int total;
    float percentage;

    printf("====== STUDENT GRADE CALCULATOR ======\n");
    printf("1. Calculate Result\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nEnter marks out of 100:\n");

            printf("Maths: ");
            scanf("%d", &maths);

            printf("Physics: ");
            scanf("%d", &physics);

            printf("Biology: ");
            scanf("%d", &biology);

            printf("Chemistry: ");
            scanf("%d", &chemistry);

            printf("English: ");
            scanf("%d", &english);

            total = maths + physics + biology + chemistry + english;
            percentage = total / 5.0;

            printf("\nTotal Marks = %d", total);
            printf("\nPercentage = %.2f%%", percentage);

            // Pass / Fail Condition
            if (maths < 35 || physics < 35 || biology < 35 ||
                chemistry < 35 || english < 35) {

                printf("\nResult: FAIL");
            } 
            else {
                printf("\nResult: PASS");

                // Grade System
                if (percentage >= 90)
                    printf("\nGrade: A+");
                else if (percentage >= 80)
                    printf("\nGrade: A");
                else if (percentage >= 70)
                    printf("\nGrade: B");
                else if (percentage >= 60)
                    printf("\nGrade: C");
                else
                    printf("\nGrade: D");
            }
            break;

        case 2:
            printf("\nThank you! Program exited.");
            break;

        default:
            printf("\nInvalid choice!");
    }

    return 0;
}
