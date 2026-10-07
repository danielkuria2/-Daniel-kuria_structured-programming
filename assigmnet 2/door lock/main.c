#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Platform-specific delay function
// The assignment suggests sleep(1000), which implies milliseconds.
// Windows uses Sleep(1000) from <windows.h>, while Linux/Unix uses usleep(1000 * 1000) or sleep(1).
#ifdef _WIN32
#include <windows.h>
#define DELAY(ms) Sleep(ms)
#else
#include <unistd.h>
#define DELAY(ms) usleep(ms * 1000)
#endif

int main() {

    char enteredPin[50];
    const char *correctPin = "7788";
    int attempts = 0;
    int isAuthenticated = 0;
    int choice;



    while (attempts < 3) {
        printf("\nEnter your 4-digit PIN: ");
        scanf("%49s", enteredPin);

        if (strlen(enteredPin) < 4) {
            printf("PIN is too short (must be 4 digits)\n");
            attempts++;
        } else if (strlen(enteredPin) > 4) {
            printf("PIN is too long (must be 4 digits)\n");
            attempts++;
        } else {
            printf("PIN is exactly 4 digits\n");

            if (strcmp(enteredPin, correctPin) == 0) {
                isAuthenticated = 1;
                break;
            } else {
                printf("Incorrect PIN.\n");
                attempts++;
            }
        }

        if (attempts < 3) {
            printf("Remaining attempts: %d\n", 3 - attempts);
        }
    }


    if (isAuthenticated) {
        printf("\n Device Menu \n");
        printf("1. Open Door\n");
        printf("2. Change Username\n");
        printf("3. Change PIN\n");
        printf("4. Exit\n");


        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Access granted. Door unlocked\n");
                break;
            case 2:
                printf("Change username feature coming soon.\n");
                break;
            case 3:
                printf("Change PIN feature coming soon.\n");
                break;
            case 4:
                printf("Exiting system.\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    }

    else {
        printf("\nSystem locked! Wait for 5 seconds...\n");

        for (int i = 5; i >= 1; i--) {
            printf("%d...\n", i);

            DELAY(1000);
        }

        printf("You can try again now.\n");
    }

    return 0;
}
