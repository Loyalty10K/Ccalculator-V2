#include <stdio.h>

// Helper function to handle input errors (DRY principle)
void boringprintf() {
    printf("\n");
    printf("----> Error: Please enter a valid number. <----\n\n");
    
    // Clear invalid input character-by-character from the stdin buffer
    while (getchar() != '\n');
}

int main(void) { 
    int choice = 0;
    int a = 0, b = 0; // Variable declarations

    do { 
        printf("Please choose the operation: \n");
        printf("1) Addition\n");
        printf("2) Subtraction\n");
        printf("3) Multiplication\n");
        printf("4) Division\n");
        printf("5) Exit\n");
        printf("Your choice: ");

        if (scanf("%d", &choice) != 1) {
            boringprintf();
            continue; // Re-prompt menu instead of crashing
        }

        // MAIN PROGRAM LOGIC --------------------------------
        switch (choice) {
            case 1:
                printf("You chose addition.\n");
                printf("Choose first number: ");
                if (scanf("%d", &a) != 1) { boringprintf(); break; }
                printf("Choose second number: ");
                if (scanf("%d", &b) != 1) { boringprintf(); break; }
                
                printf("---> %d + %d = %d\n\n", a, b, a + b);
                break; // Case 1: ADDITION

            case 2: 
                printf("You chose subtraction.\n");
                printf("Choose first number: ");
                if (scanf("%d", &a) != 1) { boringprintf(); break; }
                printf("Choose second number: ");
                if (scanf("%d", &b) != 1) { boringprintf(); break; }
                
                printf("---> %d - %d = %d\n\n", a, b, a - b);
                break; // Case 2: SUBTRACTION

            case 3: 
                printf("You chose multiplication.\n");
                printf("Choose first number: ");
                if (scanf("%d", &a) != 1) { boringprintf(); break; }
                printf("Choose second number: ");
                if (scanf("%d", &b) != 1) { boringprintf(); break; }
                
                printf("---> %d * %d = %d\n\n", a, b, a * b);
                break; // Case 3: MULTIPLICATION

            case 4: 
                printf("You chose division.\n");
                printf("Choose first number: ");
                if (scanf("%d", &a) != 1) { boringprintf(); break; }
                
                printf("Choose second number: ");
                if (scanf("%d", &b) != 1) { boringprintf(); break; }

                // Check divisor (b) for zero to prevent runtime crash
                if (b == 0) {
                    printf("Error: Cannot divide by zero.\n\n");
                    break;
                }

                printf("---> %d / %d = %.2f\n\n", a, b, (double)a / b);
                break; // Case 4: DIVISION

            case 5:
                break; // EXIT CASE

            default:
                printf("Invalid choice. Please select an option between 1 and 5.\n\n");
                break;
        }

    } while (choice != 5); // Loops until option 5 is selected

    printf("\nExited program successfully.\n");
    return 0;
}
