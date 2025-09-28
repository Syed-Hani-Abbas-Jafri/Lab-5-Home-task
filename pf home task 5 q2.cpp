#include <stdio.h>

int main() {
    int power;
    char color;

    printf("Is the power on? (1 for Yes, 0 for No)\n");
    scanf("%d", &power);

    if (power == 1) {
        printf("Enter the light color\nR for Red\nY for Yellow\nG for Green\n");
        scanf(" %c", &color);   

        if (color == 'R') {
            printf("Stop!\n");
        } else if (color == 'Y') {
            printf("Caution!\n");
        } else if (color == 'G') {
            printf("Go!\n");
        } else {
            printf("Invalid color\n");
        }
    } else {
        printf("Signal Off\n");
    }

    return 0;
}

