#include <stdio.h>

int main() {
    char room, action;

    printf("Enter room (L for Living Room, K for Kitchen): ");
    scanf(" %c", &room);

    switch (room) {
        case 'L':
            printf("Enter action (L for Lights, T for Thermostat): ");
            scanf(" %c", &action);

            switch (action) {
                case 'L':
                    printf("Adjusting ambient lighting.\n");
                    break;
                case 'T':
                    printf("Setting living room temperature.\n");
                    break;
                default:
                    printf("Invalid action for Living Room.\n");
            }
            break;

        case 'K': 
            printf("Enter action (L for Lights, T for Thermostat): ");
            scanf(" %c", &action);

            switch (action) {
                case 'L':
                    printf("Turning on bright task lighting.\n");
                    break;
                case 'T':
                    printf("Setting kitchen temperature.\n");
                    break;
                default:
                    printf("Invalid action for Kitchen.\n");
            }
            break;

        default:
            printf("Invalid room.\n");
    }

    return 0;
}

