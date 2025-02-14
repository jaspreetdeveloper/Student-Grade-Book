#include <stdio.h>

int main() {
    int choice;
    int a, b, c, d, e;
    int s;
    float avg;

    printf("STUDENT GRADE BOOK\n");
    printf("1. Welcome\n");
    printf("2. Enter Subject marks\n");
    printf("3. Calculate Average Marks\n");
    printf("4. Exit\n");

    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("*** Thank you for using ***\n");
            printf("*** GREETINGS ***\n*** HAVE A NICE EXPERIENCE ***\n");
            break;

        case 2:
            printf("\nEnter Hindi Marks: ");
            scanf("%d", &a);
            if ( int a!= 1 || a < 0 || a > 100) {
                printf("Invalid input. Please enter a valid integer mark (0-100).\n");
                while (getchar() != '\n'); // Clear input buffer
                continue; // Skip the rest of case 2
            }

            printf("Enter English Marks: ");
            scanf("%d", &b);
            if ( b!= 1 || b < 0 || b > 100) {
                printf("Invalid input. Please enter a valid integer mark (0-100).\n");
                while (getchar() != '\n'); // Clear input buffer
                continue; // Skip the rest of case 2
            }

            printf("Enter Maths Marks: ");
            scanf("%d", &c);
            if ( c!= 1 || c < 0 || c > 100) {
                printf("Invalid input. Please enter a valid integer mark (0-100).\n");
                while (getchar() != '\n'); // Clear input buffer
                continue; // Skip the rest of case 2
            }

            printf("Enter Science Marks: ");
            scanf("%d", &d);
            if ( d!= 1 || d < 0 || d > 100) {
                printf("Invalid input. Please enter a valid integer mark (0-100).\n");
                while (getchar() != '\n'); // Clear input buffer
                continue; // Skip the rest of case 2
            }

            printf("Enter Computer Marks: ");
            scanf("%d", &e);
            if ( e!= 1 || e < 0 || e > 100) {
                printf("Invalid input. Please enter a valid integer mark (0-100).\n");
                while (getchar() != '\n'); // Clear input buffer
                continue; // Skip the rest of case 2
            }
            break;

        case 3:
            s = a + b + c + d + e;
            avg = (float)s / 5.0;
            printf("Average Marks: %f\n", avg);
            break;

        case 4:
            printf("Exiting the Program.\n");
            printf("Thank You For Using. Have a nice day.\n");
            break;

        default:
            printf("Invalid choice. Please Enter a Valid Number.\n");
        }
    } while (choice != 4);

    return 0;
}
